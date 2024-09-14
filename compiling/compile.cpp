#include <iostream>

// namespace std;

const char* Linker();

int main( /*int argc, char const *argv[] */)
{
    std:: cout << Linker()<< std::endl;    
    // int a = 0;
    // int b = 0;
    return 0;


}
// #include "head.h"


/**
cpp ->  pre-proccess -> 

Common command to compile 

g++ <file>.cpp || ./<compiled_code>.out


#PRE-PROCCESSING
g++ -E <file_target>.cpp  > <output_compile>.p


#COMPILE
g++ -c <file_target>.cpp  || Output = <result>.o

#show deassemble
objdump -d <file_target>.o

#LINKING = after Compile the result is object file(.o) which can use multiple  


#EXECUTABLE w/LINKING
g++ <file_target>.cpp || Output = <result>.out || ./<resullt>.out
=======OR==========
g++ <obj_file>.o || Output = <result>.out || ./<resullt>.out





 * **/