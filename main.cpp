#include "Shape.h"

void main()
{
    Shape *arrayOfShapes[3];

    arrayOfShapes[0]=new Rectangle(3,5);
    arrayOfSahpes[1]=new Triangle(1,6);
    arrayOfShapes[2]=new Circle(4);

    arrayOfShapes[0]->getArea();
    arrayOfShapes[1]->getArea();
    arrayOfShapes[2]->getArea();
    cout<<endl;

    delete arrayOfShapes[0];cout<<endl;
    delete arrayOfShapes[1];cout<<endl;
    delete arrayOfShapes[2];
}
