#include<ankur.h>
int partition(int a[], int l, int h);
void  quicksort(int a[], int l, int h)
{
	int loc;
	if(l < h)
	{
	  loc = partition(a, l, h);
	  quicksort(a, l, loc - 1);
	  quicksort(a, loc + 1, h);
	}

}
int  partition(int a[], int l, int h)
{
	int temp;
	int pivot = a[l];
	int i = l;
	int j = h;
	while(i < j)
	{
	  while(a[i] <= pivot)
	  {
	    i++;
	  }
	  while(a[j] >= pivot)
	  {
	    j--;
	  }
	  if(i < j)
	  {
	     temp = a[j];
	     a[j] = a[i];
	     a[i] = temp;
	  }
	}
	temp = a[j];
	a[j] = a[l];
	a[l] = temp;
	return j;
}
void main()
{
	clrscr();
	int no, a[10], i, l , h;
	printf("Enter the elements of the array");
	scanf("%d", &no);
	printf("Enter the elements: ");
	for (i = 0; i < no; i++)
	{
	  scanf("%d", &a[i]);
	}
	l = 0;
	h = no - 1;
	quicksort(a, l, h);
	for (i = 0; i < no; i++)
	{
	  printf(" %d ", a[i]);
	}
	getch();
}
