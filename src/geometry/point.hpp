#ifndef POINT_HPP
#define POINT_HPP

#include "iostream"
template <class T> class Point {
public:
  Point();
  Point(T, T);
  ~Point();
  void setX(T);
  T getX();
  void setY(T);
  T getY();
  friend std::ostream &operator<<(std::ostream &output, const Point<T> &point) {
    output << "(" << point._x << ',' << point._y << ')';
    return output;
  }

protected:
  T _x;
  T _y;
};

#endif // POINT_HPP
