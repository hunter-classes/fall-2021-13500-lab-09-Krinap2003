#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"


Coord3D pointA = {10, 20, 30};
Coord3D pointB = {3, 60, 999};
Coord3D pointC = {-5.7, 45.89, 300.789};
Coord3D pointD = {-20, 21, -22};
Coord3D pointE = {156, 54, 897};

// add your tests here
TEST_CASE("Task A")
{
    CHECK(length(&pointA) == doctest::Approx(37.4166).epsilon(0.05));
    CHECK(length(&pointB) == doctest::Approx(1000.805).epsilon(0.05));
    CHECK(length(&pointC) == doctest::Approx(304.323).epsilon(0.05));
}

TEST_CASE("Task B")
{
    CHECK(fartherFromOrigin(&pointA, &pointD) == &pointA);
    CHECK(fartherFromOrigin(&pointA, &pointC) == &pointC);
    CHECK(fartherFromOrigin(&pointB, &pointE) == &pointB);
}

TEST_CASE("Task C")
{
    
}