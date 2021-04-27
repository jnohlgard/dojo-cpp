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
}
}  // TEST_SUITE("Grid")
