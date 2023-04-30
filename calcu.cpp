#include<iostream>
using namespace std;
int main()
{
	char op;
	double num1,num2,result;
	cout <<"enter the 1st number ";
	cin >> num1;
	cout << "enter the 2nd number";
	cin >> num2;
	cout <<"enter operator(+,-,*,/)=";
	cin >>op;
	switch(op)
	{
		case '+' : 
		             result=num1+num2;
		             break;
		case '-' :  
		           result=num1-num2;
		           break;
		case  '*'  :
		           result=num1*num2;
			 break;
		case '/'	:
		           result=num1/num2;
			 break;
		default   :
		           cout <<"invalid operator";
			 return 0;
}
cout << num1 <<" " << op << " " << num2 << "=" << result;
return 0;
			           
}
