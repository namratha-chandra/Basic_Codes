//write a c++ program to print odd or even numbers using parameterized constructors
#include<iostream>
using namespace std;
class Number{
	private :
	int n,m;
	public:
		Number( int number,int number1)
		{
			 m=number,n=number1;
		}
		void NumberOdd()
		{
	        for(int i=m;i<=n;i++)
		{
			if(i%2==0)
			{
			cout<<"the number is even :"<<i<<endl;			
			}
		}
	}
	void NumberEven()
	{
	  for(int i=m;i<=n;i++)
		{
			if(i%2!=0)
			{
				cout<<"the number is odd:"<<i<<endl;
			}
		}
	}
}; 
int main()
{
	int m,n;
	cout<<"enter the value of m and n"<<endl;
	cin>>m>>n;
	Number obj(m,n);
	obj.NumberOdd();
	obj.NumberEven();
	return 0;
}
