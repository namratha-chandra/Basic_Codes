#include<stdio.h>
main()
{
	int a;
	printf("enter the value of a\n");
	scanf("%d",&a);
	if((a%2 == 0) && (a%3 == 0))
	{
		printf("Hello World\n");
	}
		
	else if(a%3 == 0)
	{
		printf("hello\n");
	 }
	else if (a%2 == 0)
	{
		printf("world\n");
 	}


}


