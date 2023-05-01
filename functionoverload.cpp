/*write a c++ progarm to read 2 vlaues and perfrom the sum
 of these 2 numbers using the concept of functions*/
 #include<iostream>
 using namespace std;
 class Sumation{
 	private:
 		int num;
 		public:
 			Sumation(int a)
 			{
 				num=a;
		}
			 friend void Sum(Sumation & val1,Sumation & val2);
			 
 };
 void Sum(Sumation & val1,Sumation &val2 )
 {
 	cout<<"num1:"<<val1.num<<endl;
	 cout<<"num2:"<<val2.num<<endl;
 	cout<<"sum= "<<val1.num+val2.num<<endl;
 }
 int main()
 {
 	Sumation val1(5);
 	Sumation val2(4);
 	Sum(val1,val2);
 	return 0;
 }
 
