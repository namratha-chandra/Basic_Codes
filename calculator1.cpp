// C++ program to perform basic caclulator  using class concept
#include<iostream>
using namespace std;
class Calculator{
	public:
		double add(double a,double b)
		{
			return a+b;
		}
		double sub(double a,double b)
		{
			return a-b;
		}
		double mul(double a,double b)
		{
			return a*b;
		}
		double div(double a,double b)
		{
			return a/b;
		}
};
int main()
{
	Calculator cal;
	double num1,num2;
	cout <<"enter two numbers";
	cin >> num1>>num2;
	cout<<"result of additon :"<<cal.add(num1,num2)<<endl;
	cout<<"result of subtraction :"<<cal.sub(num1,num2)<<endl;
	cout<<"result of multiplication :"<<cal.mul(num1,num2)<<endl;
	cout<<"result of division :"<<cal.div(num1,num2)<<endl;
	return 0;
}
