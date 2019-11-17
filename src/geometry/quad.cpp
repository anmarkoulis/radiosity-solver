#include "quad.hpp"
#include "math.h"
#include <stdexcept>

template <class T> T Quad<T>::getArea() {
  T x1, x2, x3, x4, y1, y2, y3, y4, z1, z2, z3, z4;
  x1 = this->_points->at(0).getX();
  y1 = this->_points->at(0).getY();
  z1 = this->_points->at(0).getZ();
  x2 = this->_points->at(1).getX();
  y2 = this->_points->at(1).getY();
  z2 = this->_points->at(1).getZ();
  x3 = this->_points->at(2).getX();
  y3 = this->_points->at(2).getY();
  z3 = this->_points->at(2).getZ();
  x4 = this->_points->at(3).getX();
  y4 = this->_points->at(3).getY();
  z4 = this->_points->at(3).getZ();

  // Use Heron's formula
  T AB = sqrt((T)(x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
  T BC = sqrt((T)(x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
  T AC = sqrt((T)(x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
  T DC = sqrt((T)(x4 - x3) * (x4 - x3) + (y4 - y3) * (y4 - y3));
  T AD = sqrt((T)(x4 - x1) * (x4 - x1) + (y4 - y1) * (y4 - y1));

  T perimeter_1 = (AB + BC + AC) / 2.0;
  T perimeter_2 = (AC + DC + AD) / 2.0;
  T Quad1Area = sqrt((T)perimeter_1 * (perimeter_1 - AB) * (perimeter_1 - BC) *
                     (perimeter_1 - AC));
  T Quad2Area = sqrt((T)perimeter_2 * (perimeter_2 - AC) * (perimeter_2 - AD) *
                     (perimeter_2 - DC));

  return Quad1Area + Quad2Area;
}

template <class T> unsigned int Quad<T>::getNPointsSupported() { return 4; }

template class Quad<double>;
template class Quad<float>;
