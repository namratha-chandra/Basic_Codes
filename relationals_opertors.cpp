//C++ program to illustrate "==" operator overloading  
#include <iostream>
class MyClass {
private:
    int value;

public:
    MyClass(int v) : value(v) {}
     bool operator==(const MyClass& other) const {
        return value == other.value;
    }
};

int main() {
    MyClass num1(5), num2(5);
    if (num1 == num2) {
        std::cout << "num1 is equal to num2\n";
    }
      return 0;
}

