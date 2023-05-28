#include <iostream>
class MyClass {
private:
    int value;

public:
    MyClass(int v) : value(v) {}

    bool operator<(const MyClass& other)
  {
        return value < other.value;
    }
};
int main() {
    MyClass a(5), b(7);

    if (a < b) {
        std::cout << "a is less than b\n";
		}
        else{
        std::cout<<"a is greater than b\n";
    }
    return 0;
}
