#include<ankur.h>
void merge(int a[], int l, int mid, int h);
void mergesort(int a[], int l, int h)
{
	int mid;
	if(l < h)
	{
		mid = (l + h) / 2;
		mergesort(a, l, mid);
		mergesort(a, mid + 1, h);
		merge(a, l, mid, h);
	}
}

void merge(int a[], int l, int mid, int h)
{
	int i = l;
	int j = mid + 1;
	int k = 0;
	int b[10];
	while(i <= mid && j <= h)
	{
		if(a[i] <= a[j])
		{
		  b[k] = a[i];
		  i++;
		  k++;
		}
		else
		if(a[i] > a[j])
		{
		  b[k] = a[j];
		  j++;
		  k++;
		}
	}
	if(i > mid)
	{
		while(j <= h)
		{
		  b[k] = a[j];
		  j++;
		  k++;
		}
	}
	if(j > h)
	{
		while(i <= mid)
		{
		  b[k] = a[i];
		  i++;
		  k++;
		}
	}
	for(k = 0; k < h; k++)
	{
		printf(" %d ", b[k]);
	}
}

void main()
{

	int no, a[10], i, low, high;
	clrscr();
	printf("Enter the number of elements int he array: ");
	scanf("%d", &no);
	for (i = 0; i < no; i++)
	{
	  scanf("%d", &a[i]);
	}
	low = 0;
	high = no - 1;
	mergesort(a, low, high);
	getch();
}


