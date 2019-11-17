#ifndef PATCH_H
#define PATCH_H

#include "material.hpp"
#include "shape.hpp"

template <class T> class Patch {
public:
  Patch(Shape<T> *shape, Material<T> *material);
  ~Patch();

private:
  Material<T> *_material;
  Shape<T> *_shape;
};

template class Patch<double>;
template class Patch<float>;

#endif // PATCH_H
