#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct stud{
	int roll;
	char name[25];
	int age;
	struct stud *next;
};
typedef struct stud node;
node *head;

node *create_list()
{
	int k,n;
	node *p,*head;
	printf("\n how many elements to enter ?");
	scanf("%d",&n);
	for(k=0;k<n;k++)
	{
		if(k==0){
			head = (node*)malloc(sizeof(node));
			p=head;
		}
		else
		{
			p->next=(node*)malloc(sizeof(node));
			p=p->next;
		}
		scanf("%d%s%d",&p->roll,&p->name,&p->age);
	}
	p->next=NULL;
	return(head);
}

void display(node *head)
{
	int count=1;
	node *p;
	p=head;
	while(p!=NULL)
	{
		printf("\nNode %d:%d %s %d",count,p->roll,p->name,p->age);
		count++;
		p=p->next;
	}
	printf("\n");
}

void main()
{
	node *head;
	int ch;
	for(;;)
	{
              printf("\n1.create\n2.display\n3.exit\n");
	    printf("enter the choice\n");
	    scanf("%d",&ch);
	    switch(ch)
	    {
	    	case 1 :
	    	         head=create_list();
	    	         break;
	  	case 2 :
	  	          display(head);
	  	          break;
	  	default :
	  	          exit(0);
			    }		
	}
}
