#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
//#include "coord3d.h"

Coord3D pointA = {10, 20, 30};
// add your tests here
TEST_CASE("Task A")
{
    CHECK(length(&pointA) == doctest::Approx(37.4166).epsilon(0.05));
}