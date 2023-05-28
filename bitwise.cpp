//c++ program to illustrate operator overloading using bitwise AND (&) operator
#include <iostream>
using namespace std;

class BitwiseOperator {
    private:
        int x, y, z;

    public:
        BitwiseOperator(int a, int b, int c) {
            x = a;
            y = b;
            z = c;
        }
        // Overloaded bitwise AND operator
        int operator&(BitwiseOperator& b) {
            return x & b.x & y & b.y & z & b.z;
        }
};

int main() {
    int a = 5, b = 7, c = 3;

    // Creating objects of BitwiseOperator class
    BitwiseOperator obj1(a, b, c);
    BitwiseOperator obj2(b, c, a);
    // Using bitwise AND operator
    int and_result = obj1 & obj2;
    cout << "Bitwise AND of " << a << ", " << b << " and " << c << " is " << and_result << endl;

    return 0;
}

