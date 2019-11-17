#include "point3d.hpp"

template <class T> Point3D<T>::Point3D() {}

template <class T> Point3D<T>::Point3D(T x, T y, T z) : Point<T>(x, y) {
  this->setZ(z);
}

template <class T> Point3D<T>::~Point3D() {}

template <class T> void Point3D<T>::setZ(T z) { this->_z = z; }
template <class T> T Point3D<T>::getZ() { return this->_z; }

template class Point3D<double>;
template class Point3D<float>;
