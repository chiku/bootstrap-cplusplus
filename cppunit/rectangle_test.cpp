#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>

#include <rectangle.h>

using namespace shape;

class RectangleTest : public CPPUNIT_NS::TestFixture
{
private:
  CPPUNIT_TEST_SUITE(RectangleTest);

  CPPUNIT_TEST(area_of_rectangle_with_width_1_height_1_is_1);
  CPPUNIT_TEST(area_of_rectangle_with_width_2_height_3_is_6);
  CPPUNIT_TEST(perimeter_of_rectangle_with_width_1_height_1_is_4);
  CPPUNIT_TEST(perimeter_of_rectangle_with_width_2_height_3_is_10);
  CPPUNIT_TEST(is_a_square_when_rectangle_with_width_1_height_1);
  CPPUNIT_TEST(is_not_a_square_when_rectangle_with_width_2_height_3);

  CPPUNIT_TEST_SUITE_END();

public:
  void setUp() {}
  void tearDown() {}

protected:
  void area_of_rectangle_with_width_1_height_1_is_1()
  {
    Rectangle rectangle(1.0, 1.0);
    CPPUNIT_ASSERT_EQUAL(1.0, rectangle.area());
  }

  void area_of_rectangle_with_width_2_height_3_is_6()
  {
    Rectangle rectangle(2.0, 3.0);
    CPPUNIT_ASSERT_EQUAL(6.0, rectangle.area());
  }

  void perimeter_of_rectangle_with_width_1_height_1_is_4()
  {
    Rectangle rectangle(1.0, 1.0);
    CPPUNIT_ASSERT_EQUAL(4.0, rectangle.perimeter());
  }

  void perimeter_of_rectangle_with_width_2_height_3_is_10()
  {
    Rectangle rectangle(2.0, 3.0);
    CPPUNIT_ASSERT_EQUAL(10.0, rectangle.perimeter());
  }

  void is_a_square_when_rectangle_with_width_1_height_1()
  {
    Rectangle rectangle(1.0, 1.0);
    CPPUNIT_ASSERT(rectangle.isSquare());
  }

  void is_not_a_square_when_rectangle_with_width_2_height_3()
  {
    Rectangle rectangle(2.0, 3.0);
    CPPUNIT_ASSERT(! rectangle.isSquare());
  }
};

CPPUNIT_TEST_SUITE_REGISTRATION(RectangleTest);
