#include<ankur.h>
#include<stdlib.h>
#include<dos.h>
int a[10], min, max, l, h;
void minmax(int a[], int l, int h, int max, int min)
{
	int mid, min1, max1, min2, max2, temp;
   //	cout << l << endl << h;
	if(l == h)
	{
		min = a[h];
		max = a[h];
	}
	else if(l == h - 1)
	{
		if(a[l] > a[h])
		{
		  max = a[l];
		  min = a[h];
		}
		else
		{
		  max = a[h];
		  min = a[l];
		}
	}
	else
	{
		mid = (l + h) / 2;
		minmax(a, l, mid, min1, max1);
		cout << "\nthe min value is "<< min1;
		cout << "\nthe max value is" << max1;
		minmax(a, mid + 1, h, min2, max2);
		if(min1 > min2)
		{
		  temp = min2;
		  if(min > temp)
		  {
		    min = min2;
		  }
		}
		else
		{
		  temp = min1;
		  if(min > temp)
		  {
		    min = min1;
		  }
		}
		if(max1 > max2)
		{
		  temp = max1;
		  if(max < temp)
		  max = max1;
		}
		else
		{
		  temp = max2;
		  if(max < temp)
		  max = max2;
		}
	}
       //	cout <<"\nThe Max Number Is:  " << max;
      //	cout << "\nThe Min Number Is: " << min;
}

void main()
{
	clrscr();
	int i;
	int no;
      //	int a[10];
	cout << "Enter the number of elements: ";
	cin >> no;
	cout << "Enter the array: ";
	for (i = 0; i < no; i++)
	{
	  cin >> a[i];
	}
	l = 0;
	h = no - 1;
	minmax(a, l, h, min, max);
	getch();
}