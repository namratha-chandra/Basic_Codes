#include <iostream>
class MyClass {
public:
	 int value;
    MyClass(int v) : value(v) {}

    bool operator>=(const MyClass& other)
  {
        return value >=other.value;
    }
};
int main() {
    MyClass num1(10);
	MyClass  num2(5);
    if (num1>=num2) {
        std::cout << "num1 is greater_than num2\n";
		}
        else{
        std::cout<<"num1 is lesser_than num2\n";
    }
    return 0;
}
