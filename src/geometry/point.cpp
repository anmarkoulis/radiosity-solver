#include "point.hpp"

template <class T> Point<T>::Point() {}

template <class T> Point<T>::Point(T x, T y) {
  this->setX(x);
  this->setY(y);
}

template <class T> Point<T>::~Point() {}

template <class T> void Point<T>::setX(T x) { this->_x = x; }
template <class T> T Point<T>::getX() { return this->_x; }

template <class T> void Point<T>::setY(T y) { this->_y = y; }
template <class T> T Point<T>::getY() { return this->_y; }

template class Point<double>;
template class Point<float>;
