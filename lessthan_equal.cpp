#include <iostream>
class MyClass {
private:
    int value;

public:
    MyClass(int v) : value(v) {}

    bool operator<=(const MyClass& other)
  {
        return value <= other.value;
    }
};
int main() {
    MyClass num1(10), num2(5);

    if (num1 <= num2) {
        std::cout << "num1 is less_than or equal to num2\n";
		}
        else{
        std::cout<<"num1 is greater_than num2\n";
    }
    return 0;
}
