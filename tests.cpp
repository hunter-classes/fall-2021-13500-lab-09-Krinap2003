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
    Coord3D pos = {0, 0, 100.0};
    Coord3D vel = {1, -5, 0.2};
    move(&pos, &vel, 2.0);
    CHECK(pos.x == 2.0);
    CHECK(pos.y == -10);
    CHECK(pos.z == doctest::Approx(100.4).epsilon(0.05));

    Coord3D pos2 = {10, 56, 90.6};
    move(&pos2, &vel, 3.0);
    CHECK(pos2.x == 13.0);
    CHECK(pos2.y == 41.0);
    CHECK(pos2.z == doctest::Approx(91.2).epsilon(0.05));

}

TEST_CASE("Task E")
{
    Coord3D *ppos = createCoord3D(10, 20, 30);
    Coord3D *pvel = createCoord3D(5.5, -1.4, 7.77);
    move(ppos, pvel, 10.0);
    CHECK((*ppos).x == 65);
    CHECK((*ppos).y == 6);
    CHECK((*ppos).z == doctest::Approx(107.7).epsilon(0.05));

    Coord3D *ppos2 = createCoord3D(126.89, 2.788, 6.3);
    Coord3D *pvel2 = createCoord3D(5.5, -1.4, 7);
    move(ppos2, pvel2, 17.0);
    CHECK((*ppos2).x == doctest::Approx(220.39).epsilon(0.05));
    CHECK((*ppos2).y == doctest::Approx(-21.012).epsilon(0.05));
    CHECK((*ppos2).z == doctest::Approx(125.3).epsilon(0.05));
}