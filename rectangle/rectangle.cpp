#include "rectangle.h"

shape::Rectangle::Rectangle(double width, double height) : width_(width), height_(height) { }

double shape::Rectangle::area() const
{
  return width_ * height_;
}

double shape::Rectangle::perimeter() const
{
  return 2 * (width_ + height_);
}

bool shape::Rectangle::isSquare() const
{
  return width_ == height_;
}
