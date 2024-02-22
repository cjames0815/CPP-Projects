// pre-processor directives
#include <iostream>
#include <stdexcept>
#include <iomanip>
#include <math.h>
#include "Geometry.h"

#define PI 3.141592653689793238

// use C++ standard library namespace
using namespace std;

//declaring Circle class and specifiy that its a subclass of Geometry
class Circle:Geometry
{
    private:
    //declare fields 
        int radius;
        double area;
    public:
    //declare constructors 
    Circle();
    Circle(int);

    //declare setter and getter for radius field
    void setRadius(int);
    //the keyword const at the end of the method
    //declares that method wont change any of the 
    //field values
    //attempting to do so will result in a compile error
    //the ampersand operator is getting the address in 
    //memory of its argument
    void getRadius(int&) const;
}

