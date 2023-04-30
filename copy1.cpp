//write a c++ program to illustrate copy constructors
#include<iostream>
using namespace std;
class Myclass{
	private:
		static int count;
		public:
			Myclass()
			{
				count++;
			}

static void displaycount()
{
	cout<<"number of object created :"<< count <<endl;
}
};
int Myclass::count=0;
int main()
{
	Myclass obj1,obj2,obj3,obj4;
	Myclass::displaycount();
	return 0;
}

