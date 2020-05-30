#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
class Ankur
{
	public:
	int convulation(int temp[5][5], int row, int col, int filter);
	void print(int temp[3][3]);
	int multiplication(int temp[3][3], int filter);
};

int Ankur :: convulation(int temp[5][5], int row, int col, int filter)
{
	int i, j, temp1[3][3], rowCount= 0, colCount = 0, count = 0, sum;
	for (i = row; i <= row + 2; i++)
	{
	  for (j = col; j <= col + 2; j++)
	  {
	    temp1[rowCount][colCount] = temp[i][j];
	    //cout <<"temp is = "<< " " << i << " " << j;
	    colCount++;
	    count++;
	  }
	   rowCount++;
	   colCount = 0;
	}
	sum = multiplication(temp1, filter);
	return sum;
	//return *temp1;
}
int Ankur :: multiplication(int temp[3][3], int filter)
{
	int filter1[3][3];
	if(filter == 1)
	{
		 int filter1[3][3] = {1, 0, 1,
						0, 1, 0,
						1, 0, 1};
	}
	else if(filter == 2)
	{
		
		 int filter1[3][3] = {1, 0, 0,
						0, 1, 0,
						0, 0, 1};
	}
	int i, j, sum = 0;
	for (i = 0; i < 3; i++)
	{
		for(j = 0;j < 3; j++)
		{
			sum = sum + temp[i][j] * filter1[i][j];
		}
	}
	return sum;				
}
void Ankur :: print(int temp[3][3])
{
	int i, j;
	for (i = 0; i < 3; i++)
	{
	  for (j = 0; j < 3; j++)
	  {
	    cout <<  " " <<temp[i][j];
	  }
	  cout << "\n";
	}
}
int main()
{
	Ankur obj;
	int matA[5][5], matB[5][5], i, j, row = 0, col = 0, temp1[3][3], resmat1[3][3], resmat2[3][3], rowcount = 0, colcount = 0, sum = 0;
	int *temp2;
	cout << "Enter Matrix A";
	for (i = 0; i < 5; i++)
	{
	  for (j = 0; j < 5; j++)
	  {
	    cin >> matA[i][j];
	  }
	}
	for (i = 1; i <= 9; i++)
	{
		cout << "\n";
	 	sum = obj.convulation(matA, row, col, 1);
	 	resmat1[rowcount][colcount] = sum;
	 	sum = obj.convulation(matA, row, col, 2);
	 	resmat2[rowcount][colcount] = sum;
	 	colcount++;
	    col++;
	    if(i % 3 == 0)
	    {
	      col = 0;
	      row++;
	      rowcount++;
	      colcount = 0;
	    }
	  
	}
	obj.print(resmat1);
	obj.print(resmat2);
    getch();
    return 0;
}
