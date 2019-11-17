#ifndef QUAD_HPP
#define QUAD_HPP

#include "iostream"
#include "shape.hpp"

template <class T> class Quad : public Shape<T> {
public:
  T getArea();
  unsigned int getNPointsSupported();
};

#endif // QUAD_HPP
