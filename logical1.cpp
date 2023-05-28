//c++ program to illustrate operator overloading for logical expressions
 
#include <iostream>
using namespace std;

class LogicalOperator {
    private:
        bool value;

    public:
        LogicalOperator(bool b) {
            value = b;
        }

        // Overloaded logical OR operator
        bool operator||(LogicalOperator& b) {
            return value || b.value;
        }

        // Overloaded logical AND operator
        bool operator&&(LogicalOperator& b) {
            return value && b.value;
        }

        // Overloaded logical NOT operator
        bool operator!() {
            return !value;
        }
};

int main() {
    bool a = true, b = false;

    // Creating objects of LogicalOperator class
    LogicalOperator obj1(a);
    LogicalOperator obj2(b);

    // Using logical OR operator
    bool or_result = obj1 || obj2;
    cout << "Logical OR of " << a << "and" << b << " is " << or_result << endl;

    // Using logical AND operator
    bool and_result = obj1 && obj2;
    cout << "Logical AND of " << a << "and" << b << " is " << and_result << endl;

    // Using logical NOT operator
    bool not_result = !obj1;
    cout << "Logical NOT of " << a << " is " << not_result << endl;

    return 0;
}

