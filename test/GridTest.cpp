#include "Grid.h"
#include "doctest/doctest.h"

enum class Door {
  Closed = 0,
  Open,
};
//using enum Door; // Not supported in Clang (at least currently)

TEST_SUITE("Grid") {
TEST_CASE("basic properties") {
  Grid<Door> doors{{5, 5}};

  CHECK(doors.at({3, 3}) == Door::Closed);
  doors.at({2,2}) = Door::Open;
  CHECK(doors.at({2, 2}) == Door::Open);
}
}  // TEST_SUITE("Grid")
