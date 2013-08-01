#include <boost/test/unit_test.hpp>

#include <rectangle.h>

using namespace shape;

class RectangleTestFixture
{
public:
  RectangleTestFixture() {}
  ~RectangleTestFixture() {}
};

BOOST_FIXTURE_TEST_SUITE(RectangleTest, RectangleTestFixture)


BOOST_AUTO_TEST_CASE(rectangle_with_width_1_height_1_has_area_1)
{
  Rectangle rectangle(1.0, 1.0);
  BOOST_CHECK_EQUAL(1.0, rectangle.area());
}

BOOST_AUTO_TEST_CASE(rectangle_with_width_2_height_3_has_area_6)
{
  Rectangle rectangle(2.0, 3.0);
  BOOST_CHECK_EQUAL(6.0, rectangle.area());
}

BOOST_AUTO_TEST_CASE(rectangle_with_width_1_height_1_has_perimeter_4)
{
  Rectangle rectangle(1.0, 1.0);
  BOOST_CHECK_EQUAL(4.0, rectangle.perimeter());
}

BOOST_AUTO_TEST_CASE(rectangle_with_width_2_height_3_has_perimeter_10)
{
  Rectangle rectangle(2.0, 3.0);
  BOOST_CHECK_EQUAL(10.0, rectangle.perimeter());
}

BOOST_AUTO_TEST_CASE(rectangle_with_width_1_height_1_is_a_square)
{
  Rectangle rectangle(1.0, 1.0);
  BOOST_CHECK(rectangle.isSquare());
}

BOOST_AUTO_TEST_CASE(rectangle_with_width_2_height_3_is_not_a_square)
{
  Rectangle rectangle(2.0, 3.0);
  BOOST_CHECK(!rectangle.isSquare());
}

BOOST_AUTO_TEST_SUITE_END()
