#include <iostream>





namespace MyNamespace {
    void aFunction() {
        // function implementation
     	// int b =  16
        std::cout << "hmmms" << std::endl;
    }
}

namespace outer {
    int x = 10;

    namespace inner {
        int y = 20;
    }
}

int main() {
    std::cout << "Outer x: " << outer::x << std::endl;
    std::cout << "Inner y: " << outer::inner::y << std::endl;

    MyNamespace::aFunction();

    return 0;
}

