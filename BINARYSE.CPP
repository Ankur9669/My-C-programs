#include<ankur.h>
#include<stdlib.h>
int l, h, number, mid, a[10];
void binarysearch( int a[], int l, int h, int number)
{
       //	printf("\n%d", a[2]);
	if(l == h)
	{
		if(number == a[l])
		{
		  printf("Number found");
		  return;
		}
		else
		{
		  printf("Number not found");
		  return;
		}
	}
	else
	{
		mid = (l + h) / 2;
		if(a[mid] == number)
		{
		  printf("Number found at position = %d", mid + 1);
		  return;
		}
		else if(a[mid] < number)
		{
		  binarysearch(a, mid + 1, h, number);
		}
		else
		{
		  binarysearch(a, l, mid, number);
		}
	}
}
void main()
{
	int a[10];
	int i;
	int no;
	clrscr();
	printf("Enter the number of elements in the array: ");
	scanf("%d", &no);
	printf("Enter the sorted array: ");
	for (i = 0; i < no; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("Enter the element to be searched: ");
	scanf("%d", &number);
	l = 0;
	h = no - 1;
	binarysearch(a, l, h, number);
	getch();
}