#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<iostream.h>
#include<stdlib.h>
void title();
typedef struct singly
{
	int data;
	struct singly *next;
}node;

node *first,*temp,*ttemp;
void title()
{
 int i;
 clrscr();
 for(i=0;i<=30;i++)
 {
  printf("*");
 }
 printf("WELCOME TO MY PROGRAM ");
 for(i=0;i<=26;i++)
 {
  printf("*");
 }
}
void creat(int val)
{
	first=(node*)malloc(sizeof(node));
	first->data=val;
	first->next=NULL;
}
void addnode(int val)
{
	temp=first;
	while(temp->next!=NULL)
	{
	 temp=temp->next;
	}
	ttemp=(node*)malloc(sizeof(node));
	ttemp->data=val;
	ttemp->next=NULL;
	temp->next=ttemp;
}
void addinmiddle(int val,int a)
{
	node *p;
	temp=first;
	int c=1;
	while(temp->data!=a)
	{
	  temp=temp->next;
	  if(temp->data==a)
	  {
	   c=0;
	  }
	}
	if(c==1)
	{
	 return ;
	}
	else if(c==0)
	{
	 ttemp=temp->next;
	 p=(node*)malloc(sizeof(node));
	 p->data=val;
	 p->next=ttemp;
	 temp->next=p;
	}
}
void print()
{
	title();
	temp=first;
	while(temp!=NULL)
	{
	 printf(" %d",temp->data);
	 temp=temp->next;
	}
}

void main()
{
 title();
 int a,b,c,m,e;
 printf("Enter the value of first: ");
 scanf("%d",&m);
 creat(m);
 printf("Enter 1 for more: ");
 scanf("%d",&c);
if(c==1)
{
 do
 {
	 printf("Enter the value of the link: ");
	 scanf("%d",&a);
	 addnode(a);
	 printf("Enter 1 for more: ");
	 scanf("%d",&c);
 }while(c==1);
}
 printf("Enter the value of middle link: ");
 scanf("%d",&b);
 printf("Enter the value after which link has to be added: ");
 scanf("%d",&e);
 addinmiddle(b,e);
 print();
 getch();
}

