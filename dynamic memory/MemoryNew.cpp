
#include <iostream>
#include <memory>

using namespace std;

int main(int argc, char const *argv[])
{




	// heap memory allocation

	// int *ptr = (int* )mall

	int* ptr;

	ptr = new int;
	*ptr = 11;


	cout << "address : " <<  ptr << endl;
	cout << "value : " << *ptr << endl;


	return 0;
}