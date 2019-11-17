#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE MyTest

#include <boost/test/unit_test.hpp>

#include "iostream"
#include "point3d.hpp"
#include "quad.hpp"

BOOST_AUTO_TEST_CASE(testquadarea) {
    Point3D<double> point(0, 0, 0);
    Point3D<double> point2(1, 0, 0);
    Point3D<double> point3(1, 1, 0);
    Point3D<double> point4(0, 1, 0);
    Quad<double> quad;
    quad.addPoint(&point);
    quad.addPoint(&point2);
    quad.addPoint(&point3);
    quad.addPoint(&point4);
    double referenceArea = 1.0;
    double computedArea = quad.getArea();
    BOOST_TEST(referenceArea == computedArea, boost::test_tools::tolerance(1e-5));
}

BOOST_AUTO_TEST_CASE(testquadperimeter) {

    Point3D<double> point(0, 0, 0);
    Point3D<double> point2(1, 0, 0);
    Point3D<double> point3;
    point3.setX(1.0);
    point3.setY(1.0);
    point3.setZ(0.0);
    Point3D<double> point4(0, 1, 0);
    Quad<double> quad;
    quad.addPoint(&point);
    quad.addPoint(&point2);
    quad.addPoint(&point3);
    quad.addPoint(&point4);

    double referencePerimeter = 4.0;
    double computedPerimeter = quad.getPerimeter();
    BOOST_TEST(referencePerimeter == computedPerimeter);
}

BOOST_AUTO_TEST_CASE(testquadpoints) {

    Quad<double> quad;
    int resultNPointsSupported = quad.getNPointsSupported();
    int referenceNPointsSupported = 4;
    BOOST_TEST(resultNPointsSupported == referenceNPointsSupported);
}
