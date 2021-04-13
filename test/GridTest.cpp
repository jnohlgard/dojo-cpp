#include "Grid.h"
#include "doctest/doctest.h"

TEST_SUITE("Grid") {
TEST_CASE("basic properties") {
  Grid grid{{5, 5}};

  CHECK(!grid.isOpenHorizontally({3, 3}));
}
}  // TEST_SUITE("Grid")
