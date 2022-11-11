#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
#include <cmath>
// add your tests here

TEST_CASE("TASK A"){
    Coord3D pointPa = {3, 4, 5};
    CHECK(floor( 100000 * length(&pointPa)) == 707106);
    pointPa = {10, 11, 12};
    CHECK(floor(10000 * length(&pointPa)) == 191049);
    pointPa = {17, 14, 9};
    CHECK(floor(10000 * length(&pointPa)) == 237907);
}

TEST_CASE("TASK B"){
    Coord3D pointP = {20, 0, 0};
    Coord3D pointQ = {10, 0, 0};
    CHECK(fartherFromOrigin(&pointP,&pointQ) == &pointP);
    pointP = {1, 0, 0};
    pointQ = {1, 0, 0};
    CHECK(fartherFromOrigin(&pointP, &pointQ) == &pointP);
    pointP = {3, 4, 5};
    pointQ = {10, 11, 12};
    CHECK(fartherFromOrigin(&pointP, &pointQ) == &pointQ);
}

TEST_CASE("TASK C"){
    Coord3D pos = {0, 0, 100.0};
    Coord3D vel = {1, -5, 0.2};
    move(&pos, &vel, 2.0);
    CHECK((pos.x == 2 && pos.y == -10 && pos.z == 100.4));

    pos = {0, 0, 0};
    vel = {1, 1, 1};
    move(&pos, &vel, 5);
    CHECK((pos.x == 5 && pos.y == 5 && pos.z == 5));

    pos = {-5, -5, -5};
    vel = {1, 1, 1};
    move(&pos, &vel, 5);
    CHECK((pos.x == 0 && pos.y == 0 && pos.z == 0));
}

TEST_CASE("TASK D"){
    double x, y, z;
    x = 10;
    y = 15;
    z = 20;
    Coord3D *ppos = createCoord3D(x, y, z);
    deleteCoord3D(ppos);
}