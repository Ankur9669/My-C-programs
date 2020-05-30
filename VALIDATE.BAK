#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<iostream.h>
#include<stdlib.h>

typedef struct singlylinklist
{
 int data;
 struct singlylinklist *next;
}node;
node *first,*temp,*ttemp;
void title();
void firstnode(int val)
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
void print()
{
 title();
 temp=first;
 while(temp!=NULL)
 {
  printf("%d ",temp->data);
  temp=temp->next;
 }
}
void addafterlast(int val)
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

void title()
{
  clrscr();
  int i;
  for(i=0;i<=105;i++)
  {
   printf("*");
  }
  printf("WELCOME TO MY PROGRAM");
  for(i=0;i<33;i++)
  {
   printf("*");
  }
}
void main()
{
 title();
 int a,c,m,i;
 printf("Enter the value of first node: ");
 scanf("%d",&a);
 firstnode(a);
 printf("Enter 1 for more: ");
 scanf("%d",&c);
 do
 {
  title();
  printf("Enter the value of the link: ");
  scanf("%d",&m);
   addnode(m);
  printf("Enter 1 for more or press any other key to exit: ");
  scanf("%d",&c);

 }while(c==1);
 printf("Enter the last element: ");
 scanf("%d",&i);
 addafterlast(i);
 print();
 getch();
}
  0