#ifndef MATERIAL_H
#define MATERIAL_H

template <class T> class Material {
public:
  Material();
  Material(T);
  ~Material();
  T getReflectivity();

private:
  T _reflectivity;
};

template class Material<double>;
template class Material<float>;

#endif // MATERIAL_H
