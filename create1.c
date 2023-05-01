#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct stud{
	int rollno;
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
	printf("\n how many elements to enter ?\n");
	scanf("%d",&n);
	for(k=0;k<n;k++)
{
	if(k==0)
	{
		head=(node*)malloc(sizeof(node));
		p=head;
	}
	else
	{
		p->next=(node*)malloc(sizeof(node));
		p=p->next;
	}
	scanf("%d%s%d",&p->rollno,&p->name,&p->age);
}
p->next=NULL;
return(head);
}

void display(node*head)
{
	int count=1;
	node *p;
	p=head;
	while(p!=NULL)
	{
		printf("\n Node %d : %d %s %d",count,p->rollno,p->name,p->age);
		count++;
		p=p->next;
	}
	printf("\n");
}
void insert(node *head)
{
	int k=0,rno;
	node *p,*q,*new;
	new=(node*)malloc(sizeof(node));
	printf("\ndata to be inserted :");
	scanf("%d%s%d",&new->rollno,&new->name,&new->age);
	printf("\n insert before rollno :");
	scanf("%d",&rno);
	 p=head;
	if(p->rollno==rno)
	{
		new->next=p;
		head=new;
	}
		else
		{
			while((p != NULL) && (p->rollno != rno))
			{
				q=p;
				p=p->next;
			  if(p==NULL)
			   {
			     q->next=new;
			      new->next=NULL;
			   }
			  else if(p->rollno==rno)
			   {
				  q->next=new;
				  new->next=p;
			   }
		   }
		}
		printf("\ninserted the rollno %d",rno);
}


void delete(node *head)
{
	int rno;
	node *p,*q;
	printf("\ndelete from roll number");
	scanf("%d",&rno);
	p=head;
	if(p->rollno==rno)
	{
		head=p->next;
		free(p);
	}
	else
	{
		while((p!=NULL)&&(p->rollno != rno))
		{
			q=p;
			p=p->next;
		}
		if(p==NULL)
		printf("\nNO  match :: deletion failed");
		else if(p->rollno==rno)
		{
			q->next=p->next;
			free(p);
		}
	}
	printf("\ndeleted rollno is :%d",rno);
}

void main()
{
	node *head;
	int ch;
	for(;;)
	{
		printf("\n1-create\n2-display\n3-insertion\n4-delete\n5-exit\n");
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
			case 3 :
				    insert(head);
				     break;
			case 4 :
				delete(head);
				break;
			default :
				exit(0);
				printf("wrong choice\n");
			      	
		}
	}
}
