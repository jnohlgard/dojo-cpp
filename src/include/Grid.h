#pragma once
#include <utility>
#include <vector>

/// Dense cartesian 2D grid
template <typename ValueType>
class Grid {
 public:
  using value_type = ValueType;
  using Vec2 = std::pair<int, int>;

  explicit Grid(Vec2 dimension) : dimension{dimension},  values(dimension.first * dimension.second, {}) {
  }

  const ValueType &at(Vec2 position) const & {
    return values.at(index_of(position));
  }

  ValueType &at(Vec2 position) & {
    return values.at(index_of(position));
  }

 private:
  std::size_t index_of(const Vec2 &position) {
    if (position.first < 0) {
      throw std::range_error("first < 0");
    }
    if (position.first >= dimension.first) {
      throw std::range_error("first >= dimension");
    }
    if (position.second < 0) {
      throw std::range_error("second < 0");
    }
    if (position.second >= dimension.second) {
      throw std::range_error("second >= dimension");
    }
    return position.first * dimension.second + position.second;
  }

  Vec2 dimension;
  std::vector<value_type> values;
};
