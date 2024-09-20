
#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char const *argv[])
{

	// heap memory allocation

	// cast-type* pointer_name = (cast-type*) malloc(size);


	//memory blocks in bytes which is unsigned integer != < 0
	size_t k = 3;

	int* ptr = (int* )malloc(k);


	
    // return condition if the memory block is not
    // initialized
    if (ptr == NULL) {
        cout << "Null pointer has been returned";
    }
 
    // condition printing the message if the memory is
    // initialized
    else {
        cout << "Memory has been allocated at address "
             << ptr << endl;
    }


    cout << sizeof(int)<< endl; // size for every all type data 

    cout << "======================================" << endl;


    // mallo block
    int var_len = 5;
    int* ptrn;

    ptrn = (int*) malloc(sizeof(int)*var_len);    
	for(int i=0;i<var_len;i++) {  
	      cout << "Enter a number : " << endl;  
	      cin >> *(ptrn+i);  
	}  


	cout << "Elemen dalam alokasi :" << "\n";
	for (int i = 0; i < var_len; ++i)
	{
		cout << *(ptrn+i) << " ";
	}

	cin.get();
	cout << "\n";

    // when the program is press enter dynamically deallocated of the memory 
    if (cin.get() == '\n')
    {
            cout << "ENTER WAS PRESSED" << endl;
            free(ptr);

    }

	return 0;
}