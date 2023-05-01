// write a c++ program to subtract two number using pass_by_reference
#include<iostream>
using namespace std;
class Subtraction{
	public:
		int num1;
		int num2;
		void result(const Subtraction & sub)
		{
			cout<<"num1:"<<sub.num1<<endl;
			cout<<"num2 :"<<sub.num2<<endl;
			cout<<"the difference of two numbers is :"<<sub.num1-sub.num2<<endl;
		}
};
int main()
{
	Subtraction obj;
	obj.num1=10;
	obj.num2=5;
	obj.result(obj);
	return 0;
}
