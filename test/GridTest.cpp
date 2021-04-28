#include "Grid.h"
#include "doctest/doctest.h"

enum class Door {
  Closed = 0,
  Open,
};
// using enum Door; // Not supported in Clang (at least currently)

using namespace dojo;

TEST_SUITE("Grid") {
TEST_CASE("basic properties") {
  Grid<Door> doors{{4, 7}};

  SUBCASE("Default constructed values") {
    for (int x = 0; x < 4; ++x) {
      for (int y = 0; y < 7; ++y) {
        CHECK(doors.at({x, y}) == Door::Closed);
      }
    }
  }

  SUBCASE("Assigning values") {
    SUBCASE("Modifying one value should not modify an unrelated value") {
      doors.at({2, 2}) = Door::Open;
      CHECK(doors.at({3, 3}) == Door::Closed);
      CHECK(doors.at({2, 2}) == Door::Open);
    }

    SUBCASE("Modifying an edge value") {
      CHECK(doors.at({1, 0}) == Door::Closed);
      doors.at({1, 0}) = Door::Open;
      CHECK(doors.at({1, 0}) == Door::Open);
    }

    SUBCASE("Modifying corner cells") {
      // Checking all corners to catch off-by-1 bugs
      CHECK(doors.at({0, 0}) == Door::Closed);
      doors.at({0, 0}) = Door::Open;
      CHECK(doors.at({0, 0}) == Door::Open);

      CHECK(doors.at({0, 6}) == Door::Closed);
      doors.at({0, 6}) = Door::Open;
      CHECK(doors.at({0, 6}) == Door::Open);

      CHECK(doors.at({3, 0}) == Door::Closed);
      doors.at({3, 0}) = Door::Open;
      CHECK(doors.at({3, 0}) == Door::Open);

      CHECK(doors.at({3, 6}) == Door::Closed);
      doors.at({3, 6}) = Door::Open;
      CHECK(doors.at({3, 6}) == Door::Open);
    }
  }

  SUBCASE("Bounds") {
    CHECK_THROWS(doors.at({-1, 2}));
    CHECK_THROWS(doors.at({4, 2}));
    CHECK_THROWS(doors.at({2, -1}));
    CHECK_THROWS(doors.at({2, 7}));
    CHECK_THROWS(doors.at({4, 7}));
    CHECK_THROWS(doors.at({-1, -1}));
  }
}
}  // TEST_SUITE("Grid")
