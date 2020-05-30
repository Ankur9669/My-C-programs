#include<ankur.h>
#include<stdlib.h>
#include<string.h>
typedef struct singly
{
	int data ;
	struct singly *next;
}node;
node *first, *temp, *ttemp, *first1;

void first(int val)
{
	first = (node*)malloc(sizeof(node));
	first -> data = val;
	first -> next = NULL;
}

void add(int val)
{
	temp = first;
	while(temp -> next != NULL)
	{
	  temp = temp -> next;
	}
	ttemp = (node*)malloc(sizeof(node));
	ttemp -> data = val;
	ttemp -> next = temp;
}

void print()
{
	temp = first;
	while(temp != NULL)
	{
	  printf("%d", temp -> data);
	}
}

void main()
{
  title();
  int i;
  int val;
  int choice;
  printf(" ENTER THE VALUE OF THE LIST: ");
  scanf("%d", &val);
  first(val);
  printf(" ENTER 1 FOR MORE: ");
  scanf("%d", &choice);
  if( choice == 1)
  {
   do
   {
    printf("ENTER THE VALUE OF THE LINK: ");
    scanf("%d", &val);
    add(val);
    printf(" ENTER 1 FOR MORE: ");
    scanf("%d", &choice);
   }while(choice == 1);
  }
  print();
 /* sortlist();
  printf(" \nENTER THE VALUE OF THE LIST: ");
  scanf("%d", &val);
  firstnode1(val);
  printf(" ENTER 1 FOR MORE: ");
  scanf("%d",&choice);
  if( choice == 1)
  {
   do
   {
	printf(" ENTER THE VALUE OF THE LINK: ");
	scanf("%d", &val);
	printf(" ENTER 1 FOR MORE: ");
	scanf("%d", &choice);
	addnode1(val);
   }while(choice == 1);
  }
  printlist1();
  sortlist1();
  printf(" \nEnter 1 for deleting the list: ");
  scanf("%d", &choice);
  if(choice == 1)
  {
    deletelist();
  }
  title();
  int i;
  int choice;
  int val;
  printf(" Enter the value of the list: ");
  scanf("%d", &val);
  firstnode(val);
  printf(" Enter 1 for more: ");
  scanf("%d",&choice);
  if(choice == 1)
  {
   do
   {
     printf(" Enter the value of the list: ");
     scanf("%d", &val);
     addnode(val);
     printf(" Enter 1 for more: ");
     scanf("%d", &choice);
   }while(choice == 1);
  }
  title();
  printf(" Enter 1 for printing the created list:\n ");
  printf(" Enter 2 for deleting the list: \n");
  printf(" Enter 3 for sorting the list: \n");
  scanf("%d", &i);
  switch(i)
  {
	case 1:
	printf(" THE CREATED LIST IS: \n");
	printlist();
	break;

	case 2:
	deletelist();
	break;

	case 3:
	printf(" THE SORTED LIST IS: \n");
	sortlist();
	break;

	default:
	printf(" You have entered a wrong value ");
	break;
   }*/

   getch();
}


