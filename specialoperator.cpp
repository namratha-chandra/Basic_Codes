//c++ program to illustrate special operators
#include <iostream>

using namespace std;

class Complex {
    private:
        double real, imag;
    public:
        Complex(double r = 0, double i = 0) {
            real = r;
            imag = i;
        }

        Complex operator + (Complex const &obj) {
            Complex res;
            res.real = real + obj.real;
            res.imag = imag + obj.imag;
            return res;
        }

        void print() {
            cout << real << " + " << imag << "i" << endl;
        }
};

int main() {
    Complex c1(3, 4);
    Complex c2(5, 6);
    Complex c3 = c1 + c2;
    c3.print();
    return 0;
}

