#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
	int a,b;
	a=atoi(argv[1]);
	b=atoi(argv[2]);
	if(a>b)
	{
		printf("a is largest\n");
		}
	else
	{
		printf("b is largest\n");
	}
	return 0;
}
