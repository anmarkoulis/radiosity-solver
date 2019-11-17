#include "triangle.hpp"
#include "math.h"
#include <stdexcept>

template <class T> T Triangle<T>::getArea() {
  T x1, x2, x3, y1, y2, y3, z1, z2, z3;
  x1 = this->_points->at(0).getX();
  y1 = this->_points->at(0).getY();
  z1 = this->_points->at(0).getZ();
  x2 = this->_points->at(1).getX();
  y2 = this->_points->at(1).getY();
  z2 = this->_points->at(1).getZ();
  x3 = this->_points->at(2).getX();
  y3 = this->_points->at(2).getY();
  z3 = this->_points->at(2).getZ();

  // Use Heron's formula
  T A = sqrt((T)(x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
  T B = sqrt((T)(x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
  T C = sqrt((T)(x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));

  // Heron's formula for area calculation
  T s = (A + B + C) / 2;
  return sqrt((T)s * (s - A) * (s - B) * (s - C));
}

template <class T> unsigned int Triangle<T>::getNPointsSupported() { return 3; }

template class Triangle<double>;
template class Triangle<float>;
