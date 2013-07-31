#ifndef __RENTANGLE_H__
#define __RENTANGLE_H__

namespace shape
{
  class Rectangle
  {
  private:
    double _height;
    double _width;

  public:
    Rectangle(double height, double width);

    double area() const;
    double perimeter() const;
    bool isSquare() const;
  };
}

#endif
