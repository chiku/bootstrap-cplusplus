#include <rectangle.h>

shape::Rectangle::Rectangle(double height, double width)
{
  _width = width;
  _height = height;
}

double shape::Rectangle::area() const
{
  return _width * _height;
}

double shape::Rectangle::perimeter() const
{
  return 2 * (_width + _height);
}

bool shape::Rectangle::isSquare() const
{
  return _width == _height;
}
