
#include<iostream.h>
#include<conio.h>
int a[10], max, min;
void minmax(int l,int h)
{

	int mid , max1, min1;
	if(l == h)
	{
		min = a[l];
		max = a[l];
	}
	else if(l == h - 1)
	{
		if( a[l] >= a[h] )
		{
		  min = a[h];
		  max = a[l];
		}
		else
		{
		  min = a[l];
		  max = a[h];
		}
	}
	else
	{
		mid = (l + h) / 2;
		minmax( l, mid);
		max1=max;
		min1=min;
		minmax(mid + 1, h);
		if( min > min1 )
		{
			min =  min1;
		}

		if( max1 > max )
		{
			max = max1;
		}

	}
}

int main()
{

	int i;
	int no;
	clrscr();
	min =a[0];
	max = a[0];
	cout << "Enter the number of elements in the array: ";
	cin >> no;
	cout << "Enter the array: ";
	for (i = 0 ; i < no; i++)
	{
	  cin >> a[i];
	}
	//l = 0;
       //	h =no;
       //	min = 12;
       //	max = 13;
      //	mid = (l + h) / 2;
	minmax(1,no-1);
	cout << "The Min No Is:" << min;
	cout << "The Max No Is:" << max;
	getch();
	return 0 ;
}