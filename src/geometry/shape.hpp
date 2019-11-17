#ifndef SHAPE_HPP
#define SHAPE_HPP

#include "point3d.hpp"
#include "vector"

template <class T> class Shape {
public:
  Shape();
  ~Shape();
  void addPoint(Point3D<T> *);
  virtual unsigned int getNPointsSupported() = 0;
  std::vector<Point3D<T>> *getPoints();
  T getPerimeter();
  virtual T getArea() = 0;

protected:
  std::vector<Point3D<T>> *_points;
};

#endif // SHAPE_HPP
