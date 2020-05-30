#include<ankur.h>
#include<stdlib.h>
typedef struct singly
{
	int data;
	struct singly *next;
}node;
node *first,*first1,*temp,*ttemp;
/*void firstnode(int val)
{
	first = (node*)malloc(sizeof(node));
	first->data = val;
	first->next = NULL;
}
void add(int val)
{
	 while(temp->next != NULL)
	 {
	  temp = temp->next;
	 }
	 ttemp = (node*)malloc(sizeof(node));
	 ttemp->next = NULL;
	 ttemp->data = val;
	 temp->next = ttemp;
}
int addnode(int val)
{
       static int count=0;
	temp = first;
	add(val);
	count++;
	return count;
}
void firstnode1(int val)
{
	first1 = (node*)malloc(sizeof(node));
	first1->next = NULL;
	first1->data = val;
}
void addnode1(int val)
{
	temp = first1;
	add(val);
}
void print()
{
	temp = first;
	while(temp != NULL)
	{
	 printf(" %d ",temp->data);
	 temp = temp->next;
	}
}
void print1()
{
	temp = first1;
	while(temp != NULL)
	{
	 printf(" %d ",temp->data);
	 temp = temp->next;
	}
}


void main()
{
  title();
  int a,b;
  int c;
  int count,sum=0;
  printf("Enter the value of link: ");
  scanf("%d", &b);
  firstnode(b);
  printf("Enter 1 for more: ");
  scanf("%d", &c);
  if(c == 1)
  {
   do
   {
	printf("Enter the value of link: ");
	scanf("%d", &a);
	printf("Enter 1 for more: ");
	scanf("%d", &c);
	count = addnode(a);
	sum=sum+count;
   }while(c == 1);
  }
  print();
/*  printf("\nEnter the value of link: ");
  scanf("%d", &b);
  firstnode1(b);
  printf("Enter 1 for more: ");
  scanf("%d", &c);
  if(c == 1)
  {
   do
   {
	printf("Enter the value of link: ");
	scanf("%d", &a);
	printf("Enter 1 for more: ");
	scanf("%d", &c);
	addnode1(a);
   }while(c == 1);
  }
  print1();
  sortlist(count);
  getch();
}*/
void firstnode(int val)
{
	first = (node*)malloc(sizeof(node));
	first->next = NULL;
	first->data = val;
}
void addnode(int val)
{
	  for(temp = first ; temp->next != NULL ; temp = temp->next);
	  ttemp=(node*)malloc(sizeof(node));
	  ttemp->data = val;
	  ttemp->next = NULL;
	  temp->next = ttemp;
}
void print()
{
	for(temp = first ; temp != NULL ; temp = temp->next)
	{
	  printf(" %d ",temp->data);
	}
}
void sortlist()
{
  int t;
  for(temp = first ; temp != NULL ; temp = temp->next)
  {
   for(ttemp = first ; ttemp != NULL ; ttemp=ttemp->next)
   {
     if(ttemp->data> temp->data)
     {
      t = temp->data;
      temp->data = ttemp->data;
      ttemp->data = t;
     }
    }
   }
   printf("\nSORTED LIST IS : ");
   print();
}
void main()
{
  title();
  int c;
  int a;
  printf("Enter the value of the link : ");
  scanf("%d",&a);
  firstnode(a);
  printf("Enter 1 for more: ");
  scanf("%d",&c);
  if(c == 1)
  {
    do
    {
      printf("Enter the value of the link: ");
      scanf("%d", &a);
      addnode(a);
      printf("Enter 1 for more: ");
      scanf("%d", &c);
    }while(c == 1);
   }
   print();
   sortlist();
   getch();
}

