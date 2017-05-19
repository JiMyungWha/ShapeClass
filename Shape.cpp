#include  "Shape.h"

Shape::Shape() : x(0),y(0) {}
Shape::Shape(int x,int y) : x(x),y(y) {}
void Shape::draw() const { cout<<"Shape Draw"<<endl; }
Shape* Shape::move() { return this; }
void Shape::getArea() { cout<<"Shape's area:"<<x*y<<endl; }
Shape::~Shape() { cout<<"Shape destroyer"<<endl; }

Rectangle::Rectangle(int w,int h) : width(w),height(h) {}
void Rectangle::draw() const { cout<<"Rectangle Draw"<<endl; }
Rectangle* Rectangle::move() { return this; }
void Rectangle::getArea() { cout<<"Rectangle's area:"<<width*height<<endl; }
Rectangle::~Rectangle() { cout<<"Rectangle destroyer"<<endl; }

Circle::Circle(int r) : radius(r) {}
void Circle::draw() const { cout<<"Circle Draw"<<endl; }
Circle* Circle::move() { return this; }
void Circle::getArea() { cout<<"Circle's area:"<<radius*radis*PI<<endl; }
Circle::~Circle() { cout<<"Circle destroyer"<<endl; }

Triangle::Triangle(int b,int h) : base(b),height(h) {}
void Triangle::draw() const { cout<<"Triangle Draw"<<endl; }
Triangle* Triangle::move() { return this; }
void Trianlge::getArea() { cout<<"Triangle's area:"<<base*height*0.5<<endl; }
Triangle::~Triangle() { cout<<"Triangle destroyer"<<endl; }
