#include<ankur.h>
#include<stdlib.h>
typedef struct singly
{
	int data;
	struct singly *next;
}node;
node *temp,*ttemp,*first;

void firstnode(int val)
{
	first = (node*)malloc(sizeof(node));
	first->data = val;
	first->next = NULL;
}
void addnode(int val)
{
	for(temp = first ; temp->next != NULL ; temp=temp->next);
	ttemp = (node*)malloc(sizeof(node));
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
void search(int val)
{
	int flag=0;
	for(temp = first ; temp != NULL ; temp = temp->next)
	{
	 if(temp->data == val)
	 {
	  printf(" VALUE FOUND ");
	  flag = 1;
	  break;
	 }
	}
	if(flag == 0)
	{
	 printf(" NOT FOUND ");
	}
}

void main()
{
  title();
  int a;
  int c;
  printf("Enter the value of link: ");
  scanf("%d", &a);
  firstnode(a);
  printf("Enter 1 for more : ");
  scanf("%d", &c);
  if(c == 1)
  {
    do
    {
      printf("Enter the value of link: ");
      scanf("%d", &a);
      addnode(a);
      printf("Enter 1 for more : ");
      scanf("%d", &c);
    }while(c == 1);
   }
   print();
   int s;
   printf("\nEnter the element that has to be searched : ");
   scanf("%d", &s);
   search(s);
   getch();
}




