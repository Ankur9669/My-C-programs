#include<ankur.h>
#include<stdlib.h>

 /*void sortelements(int data[])
{
	int i;
	int j;
	int k;
	for (i = 0; i < 5; i++)
	{
	  for (j = i; j < 5; j++)
	  {
	    if (data[j+1] < data[i])
	    {
	      int tempvar;
	      while (    */

void sorting(int data[])       //tipa hua
{
	int i, j, hole, value;
	for (i = 0; i < 5; i++)
	{
	  value = data[i];
	  hole = i;
	  while (hole > 0 && value < data[hole-1])
	  {
	    data[hole] = data[hole-1];
	    hole = hole - 1;
	  }
	  data[hole] = value;
	}
	for (i = 0; i < 5; i++)
	{
	 printf(" %d ", data[i]);
	}
}

void sorting1(int data[])  //my algo
{
	int i;
	int hole;
	int value;
	for (i = 0; i < 5; i++)
	{
	  value = data[i];
	  hole = i;
	  while (hole > 0 && data[hole - 1] > value)
	  {
	    data[hole] = data[hole -1];
	    data[hole -1] = value;
	    hole = hole - 1;
	  }
	}

	for (i = 0; i < 5; i++)
	{
	  printf(" %d ", data[i]);
	}
}
void main()
{
	title();
	int data[10];
	int i;
	int j;
	printf("Enter the elements of the array");
	for (i = 0; i < 5; i++)
	{
	  scanf("%d", &data[i]);
	}
	sorting1(data);
	getch();
}