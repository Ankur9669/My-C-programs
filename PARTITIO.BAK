#include<ankur.h>
#include<string.h>
#include<stdlib.h>
int partition(int a[],int b)
{
	int i, leftsum = 0, rightsum = 0, ans, j;
	for (i = 0; i < b; i++)
	{
	  leftsum = leftsum + a[i];
	}
	for (i = b - 1; i >= 0; i--)
	{
	  rightsum = rightsum + a[i];
	  leftsum = leftsum - a[i];
	  if (rightsum == leftsum)
	  {
	    return i;
	  }
	}
	printf(" not possible ");
	return - 1;

}
void printtwoparts(int index, int a[], int b)
{
   int i;
   for (i = 0 ; i < b ; i++)
   {
     if (i  == index)
     {
      printf("\n");
     }
     printf(" %d ", a[i]);
   }
}

void main()
{
  int m[10], i, a, index;
  title();
  printf(" Enter the number of elements ");
  scanf("%d", &a);
  printf(" Enter the elements of the array: ");
  for (i = 0; i < a; i++)
  {
    scanf("%d", &m[i]);
  }
  index = partition(m, a);
  if(index != -1)
  {
   printtwoparts(index, m, a);
  }
   getch();
}

