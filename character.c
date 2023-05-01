#include<stdio.h>
#include<string.h>
int main()
{
	int i,length=0;
	char name[10];
	printf("enter the name :\n");
	scanf("%s",&name);
	for(i=0;name[i]!='\0';i++)
	{
		length=length+1;
	}
	printf("length of the string is %d",length);
	return 0;
}
