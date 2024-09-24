
#include <iostream>
#include <memory>

using namespace std;

int main(int argc, char const *argv[])
{




	// heap memory allocation

	// int *ptr = (int* )mall

	int* ptr;
	int size; 

	cout << "Masukkan n Alokasi Array : " ;
	cin >> size;

	ptr = new int[size];
	// *ptr = size;


	for (int i = 0; i < size; ++i){

		cout << "Masukkan nilai pada index-" << i + 1 << "= ";
		// memasukkan tiap value dari panjang alokasi yang sudah di sediakan 
		cin >> *(ptr+i);

	}	



	cout << "\nelemen dalam array" << "\n";
	for (int i = 0; i < size; ++i)
	{
		// cout << "address : " <<  ptr << endl;
		cout << "value : " << *(ptr+i) << endl;
	}


	delete[] ptr;

	// dynamically input

	// int size;

	// cin << "Enter the size of elements : " << "\n"

	return 0;
}