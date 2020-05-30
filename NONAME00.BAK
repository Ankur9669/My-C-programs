#include<ankur.h>
void main()
{
	int i, number, capacity, j;
	float pw[100], p[100], w[100], totalprofit = 0, totalweight = 0;
	clrscr();
	printf("Enter the number of objects: ");
	scanf("%d", &number);
	printf("Enter the capacity of the knapsack: ");
	scanf("%d", &capacity);
	for (i = 0; i < number; i++)
	{
		printf("Enter the profit of %d elements: ", i);
		scanf("%f", &p[i]);
		printf("Enter the weight of %d element: ", i);
		scanf("%f", &w[i]);
		pw[i] = (p[i] / w[i]);
	}
	printf("Profit\t\tWeight\t\tProfit/Weight");
	for (i = 0; i < number; i++)
	{
		printf("\n%f\t%f\t   %f",p[i], w[i], pw[i]);
	}
	for (i = 0; i < number; i++)
	{
	  for(j = 0; j < number - i - 1; j++)
	  {
	    if(pw[j] < pw[j + 1])
	    {
	      int temp;
	      temp = pw[j];
	      pw[j] = pw[j + 1];
	      pw[j + 1] = temp;

	      temp = p[j];
	      p[j] = p[j + 1];
	      p[j + 1] = temp;

	      temp = w[j];
	      w[j] = w[j + 1];
	      w[j + 1] = temp;
	    }
	  }
	}
	printf("\nAfter sorting");
	for (i = 0; i < number; i++)
	{
		printf("\n%f\t%f\t   %f",p[i], w[i], pw[i]);
	}
	for (i = 0; i < number; i++)
	{
		if(w[i] <= capacity)
		{
		  totalprofit = totalprofit + p[i];
		  totalweight = totalweight + w[i];
		  capacity = capacity - w[i];
		}
		else
		{
		  totalweight = totalweight + capacity;
		  capacity = 0;
		  pw[i] = pw[i] * p[i];
		  totalprofit = totalprofit + pw[i];
		}
	}
	printf("\nThe total weight is: %f ", totalweight);
	printf("\nThe total profit is: %f ", totalprofit);

	getch();
}



