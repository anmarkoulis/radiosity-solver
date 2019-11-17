#ifndef FORMFACTOR_H
#define FORMFACTOR_H
#include "shape.hpp"

template <class T> class FormFactor {
public:
  FormFactor<T>(Shape<T> *shape1, Shape<T> *shape2);
  ~FormFactor<T>();
  T getValue();

private:
  Shape<T> *_shape1;
  Shape<T> *_shape2;
};

#endif // FORMFACTOR_H
