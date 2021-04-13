#include "Grid.h"
#include "doctest/doctest.h"

TEST_SUITE_BEGIN("Grid");

TEST_CASE("basic properties") {
  Grid grid{{5, 5}};

  CHECK(!grid.isOpenHorizontally({3, 3}));
}

TEST_SUITE_END();
