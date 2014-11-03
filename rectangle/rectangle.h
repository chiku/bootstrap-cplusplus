#ifndef RECTANGLE_H_
#define RECTANGLE_H_

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
