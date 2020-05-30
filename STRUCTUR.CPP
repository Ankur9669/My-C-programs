#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct singlylist
{
  int val;
  struct singlylist *next;
}node;
node *first,*temp,*ttemp;
void firstnode(int val)
{

 first=(node*)malloc(sizeof (node));
 first->val=val;
 first->next=NULL;
}
void addnode(int m)
{
 temp=first;
 while(temp->next!=NULL)
 {
  temp=temp->next;
 }
  ttemp=(node*)malloc(sizeof(node));
  ttemp->val=m;
  ttemp->next=NULL;
  temp->next=ttemp;
}
void print()
{
  int c=0;
  temp=first;
  while(temp->next!=NULL)
  {
   printf("  %d",temp->val);
   temp=temp->next;
  }
}
void main()
{
 int i,j,m,k,n,c=0;
 clrscr();
 printf("enter the value");
 scanf("%d",&m);
 firstnode(m);
 printf("enter the number of nodes");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  printf("enter the value to be entered");
  scanf("%d",&k);
  addnode(k);
  c++;
 }

 print();
 getch();
}
