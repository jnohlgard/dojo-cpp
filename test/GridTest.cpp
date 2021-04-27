#include "Grid.h"
#include "doctest/doctest.h"

enum class Door {
  Closed = 0,
  Open,
};
// using enum Door; // Not supported in Clang (at least currently)

TEST_SUITE("Grid") {
TEST_CASE("basic properties") {
  Grid<Door> doors{{5, 5}};

  SUBCASE("Default constructed values") {
    for (int x = 0; x < 5; ++x) {
      for (int y = 0; y < 5; ++y) {
        CHECK(doors.at({x, y}) == Door::Closed);
      }
    }
  }

  SUBCASE("Assigning values") {
    doors.at({2, 2}) = Door::Open;
    CHECK(doors.at({3, 3}) == Door::Closed);
    CHECK(doors.at({2, 2}) == Door::Open);
  }

  SUBCASE("Bounds") {
    CHECK_THROWS(doors.at({-1, 2}));
    CHECK_THROWS(doors.at({5, 2}));
    CHECK_THROWS(doors.at({2, -1}));
    CHECK_THROWS(doors.at({2, 5}));
    CHECK_THROWS(doors.at({5, 5}));
    CHECK_THROWS(doors.at({-1, -1}));
  }
}
}  // TEST_SUITE("Grid")
