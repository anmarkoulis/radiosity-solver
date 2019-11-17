#include "formfactor.hpp"
#include "iostream"
#include "point3d.hpp"
#include "quad.hpp"
#include "shape.hpp"
#include "triangle.hpp"
#include <boost/log/trivial.hpp>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  double a = 5;
  double c = 2;
  double b = 3;
  Point3D<double> point(a, c, -b);
  Point3D<double> point2(-c, a, -b);
  Point3D<double> point3(b, -a, b);
  Point3D<double> point4(a, -a, c);

  std::cout << point;
  std::cout << point2;
  std::cout << point3;
  std::vector<Point3D<double>> *points;
  Triangle<double> shape;
  shape.addPoint(&point);
  shape.addPoint(&point2);
  shape.addPoint(&point3);
  Quad<double> quad;
  quad.addPoint(&point);
  quad.addPoint(&point2);
  quad.addPoint(&point3);
  quad.addPoint(&point4);
  double area = shape.getArea();
  BOOST_LOG_TRIVIAL(debug) << "area : " << area << std::endl;
  double perimeter = shape.getPerimeter();
  BOOST_LOG_TRIVIAL(debug) << "perimeter : " << perimeter << std::endl;
  double area2 = quad.getArea();
  BOOST_LOG_TRIVIAL(trace) << "area 2 : " << area2 << std::endl;
}
