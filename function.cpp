//write a c++ program to perform addition of two numbers using int,float,one-int and one-float values
#include<iostream>
using namespace std;
void Add(int num1,int num2)
{
	cout<<"sum of two numbers are :"<<num1+num2<<endl;
 } 
 void Add(float num3,float num4)
 {
 	cout<<"sum of two floating numbers are :"<< num3+num4<<endl;
 	
 }
 void Add(int num5,float num6)
 {
 	cout<<"sum of one integer and one floating number is :"<< num5+num6<<endl;
 }
 int main()
 {
 	Add(4,5);
 	Add(2.5f,2.5f);
 	Add(2,2.5f);
 	return 0;
 }
 
