#pragma once
#include <utility>

/// Dense cartesian 2D grid
template <typename ValueType>
class Grid {
 public:
  using value_type = ValueType;
  using Vec2 = std::pair<int, int>;

  Grid(Vec2 dimension) : value{} {
  }

  const ValueType &at(Vec2) const & {
    return value;
  }

  ValueType &at(Vec2) & {
    return value;
  }

 private:
  value_type value;
};
