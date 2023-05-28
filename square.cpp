#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int i,sq;
	cout << "square and square root of a number between 1 to 25 is " <<endl;
	for(i=1;i<=25;i++)
	{	
	sq=i*i;
	cout  <<"square of " <<i <<"=" <<sq <<endl;
	cout <<"square root" <<i <<"=" <<sqrt(i) <<endl;
}
	return 0;
}
