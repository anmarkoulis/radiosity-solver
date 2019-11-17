#include "material.hpp"

template <class T> Material<T>::Material() {}
template <class T> Material<T>::Material(T reflectivity) {
  this->_reflectivity = reflectivity;
}

template <class T> Material<T>::~Material() {}

template <class T> T Material<T>::getReflectivity() {
  return this->_reflectivity;
}
