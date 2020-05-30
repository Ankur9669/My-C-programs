#include<ankur.h>
#include<stdlib.h>
void sortarray(int a[])
{
  int i;
  int value;
  int hole;
  for (i = 7; i > 0; i--)
  {
   // value = a[i];
    hole = i;
    while(hole != 7 && a[hole - 1] == 0)
    {
      value = a[hole - 1];
      a[hole - 1] = a[hole];
      a[hole] = value;
      hole++;
    }
   }
}
void print(int a[])
{
  int i;
  for (i = 0; i < 7; i++)
  {
    printf(" %d ", a[i]);
  }
}

void main()
{
	title();
	int a[7];
	int i;
	printf(" Enter the elements of the array: ");
	for(i = 0; i < 7; i++)
	{
	  scanf("%d", &a[i]);
	}
	sortarray(a);
	print(a);
	getch();
}