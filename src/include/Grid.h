#pragma once
#include <utility>

/// Dense cartesian 2D grid
class Grid {
 public:
  using Vec2 = std::pair<int, int>;
  Grid(Vec2 dimension) {
  }

  bool isOpenHorizontally(Vec2) {
    return false;
  }
};
