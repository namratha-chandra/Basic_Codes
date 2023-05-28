#include <iostream>
class MyClass {
public:
	 int value;
    MyClass(int v) : value(v) {}

    bool operator!=(const MyClass& other)
  {
        return value !=other.value;
    }
};
int main() {
    MyClass num1(10);
	MyClass  num2(20);
    if (num1!=num2) {
        std::cout << "num1 is not equal to num2\n";
		}
        else{
        std::cout<<"num1 is eqaul to num2\n";
    }
    return 0;
}
