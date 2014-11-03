#ifndef __RECTANGLE_H__
#define __RECTANGLE_H__

namespace shape
{
  class Rectangle
  {
  public:
    Rectangle(double width, double height);

    double area() const;
    double perimeter() const;
    bool isSquare() const;

  private:
    double height_;
    double width_;
  };
}

#endif
