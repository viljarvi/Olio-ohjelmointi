#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
private:
    double width;
    double height;

public:
    double getArea() const;
    double getCircum() const;
    void setWidth(double width);
    void setHeight(double height);
};

#endif // RECTANGLE_H