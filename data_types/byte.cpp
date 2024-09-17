#include <iostream>
#include <limits>

using namespace std;


class Personal {
public:
    string name;
    int age;

    void printInfo() {
        cout << "Name: " << name << ", Age: " << age << endl;
    };
};


union Data {
    int num;
    char letter;
    float decimal;
};


struct Person {
        string name;
        int age;
        float height;
};

void printDetails(const Person& p) {
    cout << "Name: " << p.name << endl;
    cout << "Age: " << p.age << endl;
    cout << "Height: " << p.height << endl;
}


int main() {
    int num = 65;        // 'num' is statically typed as an integer
    double pi = 3.14159; // 'pi' is statically typed as a double 8  byte
    char c = 'c';        // 'c' is statically typed as a char
    c = num;    // This asssigment would convert num's value to ASCII equivalent character
    num = pi; // This assignment would convert pi's value from double type to int type
    
    float phi = 3.14f;

    //arrays 
    int numbers[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i < sizeof(numbers) / sizeof(int);  ++i)
    {
        cout << numbers[i] << endl;
    }

    cout << "=========POINTERS====== " << endl;

    int nums = 42;
    int* pNum = &nums;

    cout << "nums :" << nums << " ||  memory address of nums: " << pNum << endl;


    cout << "=========REFERENCES========= " << endl;

    int numb = 45;
    int& numRef = numb;

    cout << "numb :"<< numb << " ||  alias memory address of numb : " << numRef << endl;





    cout << "============User Defined Data Types============ " << endl;
    cout << "============Struct============ " << endl;

    
    Person p1 = {"John Doe", 30, 5.9};

    printDetails(p1);


    cout << "============Class============ " << endl;

    Personal ps;
    ps.name = "Agus";
    ps.age = 25;
    ps.printInfo();

    cout << "============Union============ " << endl;

    Data d;
    d.num = 11;
    cout << d.num << endl ;

    d.letter = 'd';
    cout << d.letter << endl ;

    d.decimal = 1.23;
    cout << d.decimal << endl ;


    cout << "The value of num is: " << num << endl;
    // cout << "The value of pi is: " << pi << endl;
    // cout << "The value of c is: "<< c << endl;
    cout << numeric_limits<int>::max() << endl;
    cout << numeric_limits<int>::min() << endl;
    return 0;
}