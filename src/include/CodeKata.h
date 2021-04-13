//
// Created by Joakim Nohlgård on 2020-02-20.
//

#pragma once
#include <utility>

class Grid {
 public:
  using Position = int;
  using Vec2 = std::pair<Position, Position>;
  Grid(Vec2 dimension) {}

  bool isOpenHorizontally(Vec2) {
    return false;
  }
};
