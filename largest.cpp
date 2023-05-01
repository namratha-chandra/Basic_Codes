//write a C++ program to print the largest of two numbers using parametrisized constructors
#include<iostream>
using namespace std;
class Largest{
	public:
		Largest(int num1,int num2)
		{
			if(num1>num2)
			{
				cout<<"the largest number is :"<<num1<<endl;
			}
			else
			{
				cout<<"the samllest number is :"<<num2<<endl;
			}
		}
};
int main()
{
	Largest obj(5,4);
	return 0;
}
