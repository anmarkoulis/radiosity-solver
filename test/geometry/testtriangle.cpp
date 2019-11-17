#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE MyTest

#include <boost/test/unit_test.hpp>

#include "iostream"
#include "point3d.hpp"
#include "triangle.hpp"

BOOST_AUTO_TEST_CASE(testtrianglearea) {
  Point3D<double> point(0, 0, 0);
  Point3D<double> point2(1, 0, 0);
  Point3D<double> point3(0, 1, 0);
  Triangle<double> triangle;
  triangle.addPoint(&point);
  triangle.addPoint(&point2);
  triangle.addPoint(&point3);
  double referenceArea = 0.5;
  double computedArea = triangle.getArea();
  BOOST_TEST(referenceArea == computedArea, boost::test_tools::tolerance(1e-5));
}

BOOST_AUTO_TEST_CASE(testtriangleperimeter) {
  Point3D<double> point(0, 0, 0);
  Point3D<double> point2(1, 0, 0);
  Point3D<double> point3;
  point3.setX(0.0);
  point3.setY(1.0);
  point3.setZ(0.0);
  Triangle<double> triangle;
  triangle.addPoint(&point);
  triangle.addPoint(&point2);
  triangle.addPoint(&point3);
  double referencePerimeter = 1.0 + 1.0 + sqrt(2.0);
  double computedPerimeter = triangle.getPerimeter();
  BOOST_TEST(referencePerimeter == computedPerimeter);
}

BOOST_AUTO_TEST_CASE(testtrianglepoints) {

  Triangle<double> triangle;
  int resultNPointsSupported = triangle.getNPointsSupported();
  int referenceNPointsSupported = 3;
  BOOST_TEST(resultNPointsSupported == referenceNPointsSupported);
}

BOOST_AUTO_TEST_CASE(testinvalidnpoints) {

  Point3D<double> point(0, 0, 0);
  Point3D<double> point2(1, 0, 0);
  Point3D<double> point3(0, 1, 0);
  Point3D<double> point4(0, 1, 0);
  Triangle<double> triangle;
  triangle.addPoint(&point);
  triangle.addPoint(&point2);
  triangle.addPoint(&point3);
  BOOST_CHECK_THROW(triangle.addPoint(&point4), std::invalid_argument);
}

BOOST_AUTO_TEST_CASE(testgetsecondpoint) {

  Point3D<double> point(0, 0, 0);
  Point3D<double> point2(1, 0, 0);
  Point3D<double> point3(0, 1, 0);
  Point3D<double> point4(0, 1, 0);
  Triangle<double> triangle;
  triangle.addPoint(&point);
  triangle.addPoint(&point2);
  triangle.addPoint(&point3);
  std::vector<Point3D<double>> *newPoints = triangle.getPoints();
  BOOST_TEST(newPoints->at(0).getX() == 0.0,
             boost::test_tools::tolerance(1e-5));
}
