#include <iostream>
#include <memory>
#include <atomic>
#include <vector>
#include <thread>


using namespace std;

// forward references
void AdvanceSharedPtr();
void FileExample();





class Base
{
public:

	virtual void bases(){
		std::cout << "This is a Base Class!" << endl ;
	}


	virtual  ~Base(){
		std::cout << "This is going out to destructor of Base" << std::endl;
	}
};


class SecondBase : public Base
{
public:
	void bases() override {

		std::cout << "Im a derrived " << std::endl;
	}

	~SecondBase() override {
		std::cout << "Destructor of derrived" << std::endl;
	}
};



// the delete a class
void custom_delete(Base *ptr){
	cout << "Custom delete callded" << endl;
	delete ptr;
}

int main(int argc, char const *argv[])
{


	// creating a shared ptr and initializing it with a new object 
	shared_ptr<Base> p1 = std::make_shared<Base>();
	p1->bases();


	// dengan ini menyebabkan custom_delete function terpanggil sehingga ketika objek sudah di eksekusi sampai bawah 
	shared_ptr<Base> pp(new SecondBase, custom_delete);
	pp->bases();





	return 0;
}