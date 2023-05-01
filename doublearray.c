#include<stdio.h>
main()
{
	int i,j,a[2][2];
	printf("enter the array elements\n");
	for(i=0;i<2;i++)
	for(j=0;j<2;j++)
	scanf("%d",&a[i][j]);
	for(i=0;i<2;i++)
	for(j=0;j<2;j++)
	printf("the array elements are %d \n",a[i][j]);
}
