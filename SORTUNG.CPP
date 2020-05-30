#include<ankur.h>
#include<stdlib.h>
void sort(int a[])
{
	int i;
	int value;
	int hole;
	for (i = 0; i < 5; i++)
	{
	  value = a[i];
	  hole = i;
	  while (hole > 0 && value < a[hole - 1])
	  {
	    a[hole] = a[hole - 1];
	    a[hole - 1] = value;
	    hole = hole - 1;
	  }
	}
}
void print(int a[])
{
   int i;
   for(i = 0; i < 5; i++)
   {
     printf(" %d ", a[i]);
   }
}
}
void main()
{
	title();
	int i;
	int a[5];
	printf(" Enter the elements of the array: ");
	for (i = 0; i < 5; i++)
	{
	  scanf("%d",&a[i]);
	}
       //	*b =sort(a, 1);
       //	print(b);
	b=sort(a, 1);
	print(b);
	getch();
}