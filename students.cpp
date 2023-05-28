//write a c++ program to illustrate array object
#include<iostream>
using namespace std;
class Students{ 
	string name_;
	int age_;
	int USN_;
	public:
		Students(){}
		Students(const string & name,int age,int USN):name_(name),age_(age),USN_(USN){}
		void DisplayInfo()const {
		cout<<"Name:"<<name_<<"-"<<"Age:"<<age_<<"-"<<"USN :"<<USN_<<endl;
		}
};
int main()
{
	Students students[5];
	for(int i=0;i<5;i++)
	{
		cout<<"enter the student name :"<<students[i].name<<endl;
		cout<<"enter the age of the student :"<<students[i].age<<endl;
		cout<<"enter the USN of the student :"<<students[i].USN<<endl;
	}
	for(int i=0;i<5;i++)
	{
		students[i].DisplayInfo(students[i]);
	}
	return 0;
}
