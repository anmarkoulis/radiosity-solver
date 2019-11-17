#include "patch.hpp"

template <class T>
Patch<T>::Patch(Shape<T> *shape, Material<T> *material)
    : _shape{shape}, _material{material} {}
template <class T> Patch<T>::~Patch() {
  delete this->_shape;
  delete this->_material;
}
