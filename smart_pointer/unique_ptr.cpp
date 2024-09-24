#include <iostream>
#include <memory>

using namespace std;

int main(int argc, char const *argv[])
{


	// the library work for objects or Array 
	/*
	 The characteristics is allowed to own an object at a time,
	 and that have ownership can be cut/moved, but cannot to copies/shared  


	*/


	// creating an unique ptr
	unique_ptr<int> p1(new int(5)); // initialize to create pointer as new integer 
	unique_ptr<int> p2 = std::make_unique<int>(10); // stl c++ 14


	cout << *p1 << ", " << *p2 << endl ;


	// Transfering Unique an ownership
    std::unique_ptr<int> p0(new int(5));
    std::unique_ptr<int> pp = std::move(p0); // Ownership is transferred from p1 to p2
    

    // std::cout << p0;

    if (p0) {
        std::cout << "p0 owns the object" << std::endl;
    } else if (pp) {
        std::cout << "pp owns the object" << std::endl;
    }





	return 0;
}