#define CATCH_CONFIG_MAIN

#include <catch2/catch_all.hpp>

#include "geometry.h"


TEST_CASE("test case for Point class", "[test_point]")
{
    Point point_1(10,20);
    REQUIRE(point_1.get_x() == 10);
    REQUIRE(point_1.get_y() == 20);
}