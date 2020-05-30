#include<ankur.h>
#include<stdio.h>
void main()
{
	float p[30], w[30], n, x[30], totp = 0, totw = 0, capacity, pw, u, temp;
	int i, j;
	printf("\nEnter the number");
	scanf("%d", &n);
	printf("enter the profit");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &p[i]);
	}
	for (i = 0; i < n; i++)
	{
		scanf("%d", &w[i]);
	}
	for (i = 0; i < n; i++)
	{
		x[i] = 0.0;
	}
	printf("\nEnter the capacity of the knapsack: ");
	scanf("%d", &capacity);
	for (i = 0; i < n; i++)
	{
		pw[i] = p[i] / w[i];
	}
	for (i = 0; i < n; i++)
	{
	 for (j = 0; j < n - i - 1; j++)
	 {
	    if(pw[j] > pw[j + 1])
	    {
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
}