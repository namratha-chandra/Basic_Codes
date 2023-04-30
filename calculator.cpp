// write a c++ program to implement basic calculators using class concept

#include<iostream>
using namespace std;
class Calculator{
	public :
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
	Calculator calc;
	double num1,num2;
	cout<<"enter two number"<<endl;
	cin>>num1>>num2;
	cout<<"result of addtion :"<<calc.add(num1,num2)<<endl;
	cout<<"result of subtraction :"<<calc.sub(num1,num2)<<endl;
	cout<<"result of multiplication :"<<calc.mul(num1,num2)<<endl;
	cout<<"result of division :"<<calc.div(num1,num2)<<endl;
	return 0;
}

