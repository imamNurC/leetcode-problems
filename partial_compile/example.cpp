#include "example.h"
#include <iostream>


using namespace std;
void Example::printMessage() {
    cout << "Bodyy Split" << endl;
}


/*


# Compile each source file into an object file
g++ -c main.cpp -o main.o
g++ -c example.cpp -o example.o

# Link object files together to create the executable
g++ main.o example.o -o my_program


*/

