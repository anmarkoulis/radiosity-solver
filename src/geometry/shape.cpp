#include "shape.hpp"
#include "math.h"
#include "stdexcept"
template <class T> Shape<T>::Shape() { _points = new std::vector<Point3D<T>>; }

template <class T> void Shape<T>::addPoint(Point3D<T> *point) {
  if (this->_points->size() > getNPointsSupported() - 1) {
    throw std::invalid_argument("This is an error when adding points");
  }
  this->_points->push_back(*point);
}

template <class T> Shape<T>::~Shape() { delete this->_points; }

template <class T> std::vector<Point3D<T>> *Shape<T>::getPoints() {
  return _points;
}

template <class T> T Shape<T>::getPerimeter() {
  T perimeter = 0;
  for (unsigned long i = 0; i < this->_points->size() - 1; i++) {
    T xDiffSquare =
        (this->_points->at(i + 1).getX() - this->_points->at(i).getX()) *
        (this->_points->at(i + 1).getX() - this->_points->at(i).getX());
    T yDiffSquare =
        (this->_points->at(i + 1).getY() - this->_points->at(i).getY()) *
        (this->_points->at(i + 1).getY() - this->_points->at(i).getY());
    T zDiffSquare =
        (this->_points->at(i + 1).getZ() - this->_points->at(i).getZ()) *
        (this->_points->at(i + 1).getZ() - this->_points->at(i).getZ());
    perimeter += sqrt(xDiffSquare + yDiffSquare + zDiffSquare);
  }
  T xDiffSquare = (this->_points->at(0).getX() -
                   this->_points->at(this->_points->size() - 1).getX()) *
                  (this->_points->at(0).getX() -
                   this->_points->at(this->_points->size() - 1).getX());
  T yDiffSquare = (this->_points->at(0).getY() -
                   this->_points->at(this->_points->size() - 1).getY()) *
                  (this->_points->at(0).getY() -
                   this->_points->at(this->_points->size() - 1).getY());
  T zDiffSquare = (this->_points->at(0).getZ() -
                   this->_points->at(this->_points->size() - 1).getZ()) *
                  (this->_points->at(0).getZ() -
                   this->_points->at(this->_points->size() - 1).getZ());
  perimeter += sqrt(xDiffSquare + yDiffSquare + zDiffSquare);
  return perimeter;
}

template class Shape<double>;
template class Shape<float>;
