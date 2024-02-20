//pre processor directives
#include <iostream>

//create macro values (constants)
#define STOP 0
#define START 10

// create macro expressions (constants)
#define CONDITION(i) (i > STOP)

using namespace std;


//this function uses a while loop to display a 
//countdown to stdout
void loops(void) {
    //declare and initialze a counter variable
    //for our loop
    int i = START;

    //set up while loop using macro expression 
    //as its condition 
    while(CONDITION(i)){
        //printf("%d", i);
        //i--;
        cout << i <<' ';
        i--;
    }
    //printf("blastoff");
    cout << "blastoff" << endl;
}
