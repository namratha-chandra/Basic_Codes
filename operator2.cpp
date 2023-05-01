// c++ program to display "/" opertors can be overloaded
#include<iostream>
using namespace std;
class Myclass{
	public:
		int value;
		Myclass(int val):value(val){
		}
		Myclass operator /(const Myclass & other )
		{
			return Myclass(value / other.value);
		}
};
int main()
{
	Myclass num1(20);
	Myclass num2(10);
	Myclass result=num1/num2;
	cout<<"result :"<<result.value<<endl;
	return 0;
}
