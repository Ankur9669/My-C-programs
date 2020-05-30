#include<ankur.h>
#include<stdlib.h>
//void minmax(a, l, h, int min,  int max); int min, max;
void minmax(a, l, h,  int min,  int max)
{
       //	int min;
       //	int max;
	if(l == h)
	{
		min = a[l];
		max = a[l];
	}
	else
	if(l == h - 1)
	{
		if( a[l] > a[h] )
		{
		  min = a[h];
		  max = a[l];
		}
		else
		{
		  min = a[h];
		  max = a[l];
		}
	}
	else
	{
		mid = (l + h) / 2;
		minmax(a, l, mid, int min1, int max1);
		minmax(a, mid + 1, h, int min2, int max2);
		if( min1 > min2 )
		{
			min =  min2;
		}
		else
		{
			min = min1;
		}
		if( max1 > max2 )
		{
			max = max1;
		}
		else
		{
			max = max2;
		}
	}
}

void main()
{
	int a[10];
	int i;
	int no;
	int mid;
       //	int min;
	//int max;
	cout << "Enter the number of elements in the array: ";
	cin >> no;
	cout << "Enter the array: ";
	for (i = 0 ; i < 5; i++)
	{
	  cin >> a[i];
	}
	l = 0;
	h = no;
       //	min = 12;
       //	max = 13;
      //	mid = (l + h) / 2;
	minmax(a, l, h, min, max);
	cout << "The Min No Is:" << min;
	cout << "The Max No Is:" << max;
	getch();
}