#include <iostream>
#include <limits>

using namespace std;
int main() {
    int num = 65;        // 'num' is statically typed as an integer
    double pi = 3.14159; // 'pi' is statically typed as a double
    char c = 'c';        // 'c' is statically typed as a char

    c = num;    // This asssigment would convert num's value to ASCII equivalent character
    num = pi; // This assignment would convert pi's value from double type to int type
    
    cout << "The value of num is: " << num << endl;
    // cout << "The value of pi is: " << pi << endl;
    // cout << "The value of c is: "<< c << endl;
    cout << numeric_limits<int>::max() << endl;
    return 0;
}