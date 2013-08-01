#include <igloo/igloo_alt.h>
#include <rectangle.h>

using namespace igloo;
using namespace shape;

Describe(shape_Rectangle)
{
  Describe(with_height_1_and_width_1)
  {
    It(has_area_1)
    {
      Rectangle rectangle(1.0, 1.0);
      Assert::That(rectangle.area(), Equals(1.0));
    }

    It(has_perimeter_1)
    {
      Rectangle rectangle(1.0, 1.0);
      Assert::That(rectangle.perimeter(), Equals(4.0));
    }

    It(is_a_square)
    {
      Rectangle rectangle(1.0, 1.0);
      Assert::That(rectangle.isSquare(), IsTrue());
    }
  };

  Describe(with_height_2_and_width_3)
  {
    It(has_area_6)
    {
      Rectangle rectangle(2.0, 3.0);
      Assert::That(rectangle.area(), Equals(6.0));
    }

    It(has_perimeter_10)
    {
      Rectangle rectangle(2.0, 3.0);
      Assert::That(rectangle.perimeter(), Equals(10.0));
    }

    It(is_not_a_square)
    {
      Rectangle rectangle(2.0, 3.0);
      Assert::That(rectangle.isSquare(), IsFalse());
    }
  };
};
