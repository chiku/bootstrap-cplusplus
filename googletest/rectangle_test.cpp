#include <gtest/gtest.h>

#include <rectangle.h>

using namespace shape;

class RectangleTest : public ::testing::Test
{
protected:
  RectangleTest() {}
  virtual ~RectangleTest() {}
  virtual void SetUp() {}
  virtual void TearDown() {}
};

TEST_F(RectangleTest, with_width_1_height_1_has_area_1)
{
  Rectangle rectangle(1.0, 1.0);
  EXPECT_EQ(1.0, rectangle.area());
}

TEST_F(RectangleTest, with_width_2_height_3_has_area_6)
{
  Rectangle rectangle(2.0, 3.0);
  EXPECT_EQ(6.0, rectangle.area());
}

TEST_F(RectangleTest, with_width_1_height_1_has_perimeter_4)
{
  Rectangle rectangle(1.0, 1.0);
  EXPECT_EQ(4.0, rectangle.perimeter());
}

TEST_F(RectangleTest, with_width_2_height_3_has_perimeter_10)
{
  Rectangle rectangle(2.0, 3.0);
  EXPECT_EQ(10.0, rectangle.perimeter());
}

TEST_F(RectangleTest, with_width_1_height_1_is_a_square)
{
  Rectangle rectangle(1.0, 1.0);
  EXPECT_TRUE(rectangle.isSquare());
}

TEST_F(RectangleTest, with_width_2_height_3_is_not_a_square)
{
  Rectangle rectangle(2.0, 3.0);
  EXPECT_FALSE(rectangle.isSquare());
}
