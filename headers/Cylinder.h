// pre-processor directives
#include "Circle.h"

// use C++ standard library namespace
using namespace std;

//declare a Cylinder class and specify that its a subclass of Circle
// must specify the access level of the superclass because its a 
//concrete class
class Cylinder : public Circle
{
    private:
    //declare fields
        int height;
        double volume;
    public:
    //define constructors 
    Cylinder()
    {
        //imnitialing the radius and height to zero
        // when calling a super-class member, the call must be 
        //prefixed with the name of the superclass and the 
        //resolution operater
        this->Circle::setRadius(0);
        height =0;
    }
    Cylinder(int radius,int height)
    {
        //check if we've been given an invalid radius - less 
    //than zero
    if (radius < 0){
        //throw an exception
        throw invalid_argument("Radius must be greater than or equal to zero.");

    }
    //check if we've been given an invalid radius - less 
    //than zero
    if (height < 0){
        //throw an exception
        throw invalid_argument("Height must be greater than or equal to zero.");

    }
    //initailize fields using privided arguements 
    this ->Circle::setRadius(radius);
    this->height = height;
    }

    //define setter and getter methods for hright field
   void setHeight(int height)
   
    //check if we've been given an invalid radius - less 
    //than zero
  {  
    if (height < 0){
        //throw an exception
        throw invalid_argument("Height must be greater than or equal to zero.");
    }
    
    //initailize fields using privided arguements 
    
    this->height = height;
    }
    void getHeight(int& height) const
    {
        height = this->height;
    }

    // define the getter for the volume field 
    void getVolume(double& volume) const
    {
        volume = this->volume;
    }

    void compute() override 
    {
        double a;
        this->Circle::getArea(a);
        volume = height * a;
    }

    void printCylinder()
    {
        double a;
        this->Circle::getArea(a);
        int r;
        this->Circle::getRadius(r);

        cout << fixed << showpoint;
        cout << setprecision(5);

        cout << "radius=" << r <<",area="<< a <<", height=" << height << ", volume=" << volume << endl;
    }

    bool equalCylinder(const Cylinder& otherCylinder) const
    {
        return(height == otherCylinder.height &&
        volume == otherCylinder.volume);
    }
};