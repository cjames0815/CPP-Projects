// pre-processor directives
#include <iostream>
#include <string>

//a struct is a collection of related fields
// and the fields may be of different types
// declare a struct for a Person that has
// two fields

struct Person
{
    // declare fields
    float heightInMeters;
    int weightInKilos;
};

// use C++ standard library namespace
using namespace std;

// this function use the Person struct for purposes 
// of displaying th values in its fields 
void accessStructMembers(void) {
    // declare a Person Struct 
    Person person;

    // initialize the struct fields
    person.heightInMeters = 1.8;
    person.weightInKilos = 96;

//use a type definition to declare a struct 
// a type definition define s an alias for a struct 
// that allows the alias to be used like a primitive 
//data type
    typedef struct 
    {
        // declare fields
    float heightInMeters;
    int weightInKilos;
    }PersonType; // this is the alias
    

     // initialize the struct fields
    person.heightInMeters = 1.8;
    person.weightInKilos = 96;


    //displaying the values in the struct fields
    cout << " Person's weight is " << person.weightInKilos << " kilograms " << endl;
    cout << " Person's hegiht is " << person.heightInMeters << " meters " << endl;


    PersonType p;

    p.heightInMeters = 1.8;
    p.weightInKilos = 96;

     //displaying the values in the struct fields
    cout << " Person's weight is " << person.weightInKilos << " kilograms " << endl;
    cout << " Person's hegiht is " << person.heightInMeters << " meters " << endl;
 }

//this functions has a Person struct parameter
// it will compute and return the BMI of the Person 
// float bodyMassIndex( PersonType p){
//     return p.weightInKilos / (p.heightInMeters * p.heightInMeters);
// }