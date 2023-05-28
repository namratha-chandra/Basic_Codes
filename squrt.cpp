#include <iostream>

using namespace std;

int main()
{
    double sq,i,sqrt=1;
    for (i=1; i<=25; i++) 
	{
        sq=i*i;
		cout <<"square of the number of "<< i <<"=" << sq <<endl;
        sqrt = 0.5 * (sqrt + i / sqrt);
        cout << "Square root of " << i << " = " << sqrt <<endl;
    }
return 0;
}
