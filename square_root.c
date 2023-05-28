#include <iostream>

using namespace std;

int main() {
    double num;
    cout << "Enter a number: ";
    cin >> num;
    if (num < 0) {
        cout << "Invalid input. Cannot find square root of negative number.";
        return 0;
    }
    double sqrt = 1;
    for (int i = 0; i < 10; i++) {
        sqrt = 0.5 * (sqrt + num / sqrt);
    }
    cout << "Square root of " << num << " = " << sqrt;
    return 0;
}








