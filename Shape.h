#include <iostream>
using namespace std;

const double PI=3.14;

class Shape
{
protected:
    int x,y;
public:
    Shape();
    Shape(int x,int y);
    virtual void draw() const;
    virtual Shape* move();
    virtual void getArea();
    virtual ~Shape();
};
class Rectangle : public Shape
{
private:
    int width,height;
public:
    Rectangle(int w,int h);
    void draw() const;
    Rectangle* move();
    void getArea();
    ~Rectangle();
};
class Circle : public Shape
{
private:
    int radius;
public:
    Circle(int r);
    void draw() const;
    Circle* move();
    void getArea();
    ~Circle();
};
class Triangle : public Shape
{
private:
    int base,height;
public:
    Triangle(int b,int h);
    void draw() const;
    Triangle* move();
    void getArea();
    ~Triangle();
};

