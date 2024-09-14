#include<iostream>

using namespace std;

int add(int a, int b) {
    return a + b;
}

class Calculator {
public:
    // A member function to multiply two numbers
    int multiply(int a, int b) {
        return a * b;
    }
};

//lambda function 
/*

[capture-list](parameters) -> return_type {
    // function body
};

*/



int main(){

	// lambda 

	int multiplier =  4;

				//capture list is optional	// params is optional
	//tthis allows all data types
	auto printr = [](){
		return "Hi is String!!";
	};

	cout <<  printr();

	return 0;
}