// write a C++ program to find area of the rectangle and circle using constructors concepts
#include<iostream>
#define pi 3.142
using namespace std;
class Area{
	int l,b,r,area;
	public:
		Area(int length,int breadth,int radius)
		{
			l=length,b=breadth,r=radius;
		}
		void areaRectangle()
		{
			cout<<"Area of rectangle is :"<<l*b<<endl;
		}
		void areaCricle()
		{
			int result=pi*r*r;
			cout<<"Area ofcircle is :"<<result<<endl;
		}
};
int main()
{
	Area obj(4,5,4);
	obj.areaRectangle();
	obj.areaCricle();
	return 0;
}
