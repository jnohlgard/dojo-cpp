#pragma once
#include <utility>

/// Dense cartesian 2D grid
template <typename ValueType>
class Grid {
 public:
  using value_type = ValueType;
  using Vec2 = std::pair<int, int>;

  Grid(Vec2 dimension) {
  }

  const ValueType &at(Vec2) const & {
    return {};
  }
};
