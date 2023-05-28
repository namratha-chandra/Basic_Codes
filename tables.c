#include<stdio.h>
void main()
{
	int i,num;
	for(i=1;i<=10;i++)
	{
       if(i<=5)     
	   {
		num=5*i;
		printf("tables of %d * %d =%d \n",5,i,num);
	   }
 	    else
 	    {
 	           if(i%2 != 0)
 	           {
			     num=5*i;	
 	    	   printf("%d\n",num);
 	           }
		 }
}
}
