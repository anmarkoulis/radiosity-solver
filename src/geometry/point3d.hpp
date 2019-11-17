#ifndef POINT3D_HPP
#define POINT3D_HPP

#include "iostream"
#include "point.hpp"

template <class T> class Point3D : public Point<T> {
public:
  Point3D();
  Point3D(T, T, T);
  ~Point3D();
  void setZ(T);
  T getZ();
  friend std::ostream &operator<<(std::ostream &output,
                                  const Point3D<T> &point3d) {
    output << "(" << point3d._x << ',' << point3d._y << ',' << point3d._z
           << ')';

    return output;
  }

protected:
  T _z;
};

#endif // POINT3D_HPP
