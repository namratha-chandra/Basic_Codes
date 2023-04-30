//write a c++ program to illustrate copy constructor using scope resolutor
#include<iostream>
using namespace std;
class Myclass{
	public:
		static int count;
		Myclass(){
			count++;
		}
};
int Myclass::count=0;
int main()
{
	Myclass obj1,obj2,obj3;
	cout<<"number of object created :"<<Myclass::count<<endl;
	return 0;
}
