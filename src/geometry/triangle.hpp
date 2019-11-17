#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "iostream"
#include "shape.hpp"

template <class T> class Triangle : public Shape<T> {
public:
  T getArea();
  unsigned int getNPointsSupported();
};

#endif // TRIANGLE_H
