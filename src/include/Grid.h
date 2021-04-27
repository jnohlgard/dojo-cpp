#pragma once
#include <utility>
#include <vector>

/// Dense cartesian 2D grid
template <typename ValueType>
class Grid {
 public:
  using value_type = ValueType;
  using Vec2 = std::pair<int, int>;

  Grid(Vec2 dimension) : width{dimension.second}, values{index_of(dimension)} {
  }

  const ValueType &at(Vec2 position) const & {
    return values.at(index_of(position));
  }

  ValueType &at(Vec2 position) & {
    return values.at(index_of(position));
  }

 private:
  std::size_t index_of(const Vec2 &position) {
    return position.first * width + position.second;
  }

  int width;
  std::vector<value_type> values;
};
