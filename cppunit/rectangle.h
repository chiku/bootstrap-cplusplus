#ifndef __RECTANGLE_H__
#define __RECTANGLE_H__

namespace shape
{
  class Rectangle
  {
  private:
    double _height;
    double _width;

  public:
    Rectangle(double width, double height);

    double area() const;
    double perimeter() const;
    bool isSquare() const;
  };
}

#endif
