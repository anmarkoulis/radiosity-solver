#include "formfactor.hpp"

template <class T>
FormFactor<T>::FormFactor(Shape<T> *shape1, Shape<T> *shape2)
    : _shape1{shape1}, _shape2{shape2} {}

template <class T> FormFactor<T>::~FormFactor() {}

template <class T> T FormFactor<T>::getValue() { return 2; }
