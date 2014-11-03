#include "catch.hpp"

#include "rectangle.h"

using namespace shape;

SCENARIO("Rectangle", "[rectangle]") {
  GIVEN("A rectangle") {
    WHEN("its width is 1 and height is 1") {
      Rectangle rectangle(1.0, 1.0);

      THEN("its area is 1") {
        REQUIRE(rectangle.area() == 1.0);
      }

      THEN("its perimeter is 4") {
        REQUIRE(rectangle.perimeter() == 4.0);
      }

      THEN("it is a square") {
        REQUIRE(rectangle.isSquare());
      }
    }

    WHEN("its width is 2 and height is 3") {
      Rectangle rectangle(2.0, 3.0);

      THEN("its area is 6") {
        REQUIRE(rectangle.area() == 6.0);
      }

      THEN("its perimeter is 10") {
        REQUIRE(rectangle.perimeter() == 10.0);
      }

      THEN("it is not a square") {
        REQUIRE(!rectangle.isSquare());
      }
    }
  }
}
