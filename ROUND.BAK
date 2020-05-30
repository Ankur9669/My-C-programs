#include<ankur.h>
#include<stdlib.h>
#define max 30
void main()
{
	clrscr();
	int i, j = 0, qt, number, time = 0, at[max], bt[max];
	int remain, tat = 0, wt = 0, rt[max], flag = 0, c = 0;
	printf("Enter the number of processes: \n");
	scanf("%d", &number);
	remain = number;
	printf("Enter the quantum time: \n");
	scanf("%d", &qt);
	for (i = 0; i < number; i++)
	{
		printf("Enter the burst time of %d process: \n", i);
		scanf("%d", &bt[i]);
		rt[i] = bt[i];
		printf("Enter the arrival time of the %d process: \n", i);
		scanf("%d", &at[i]);
	}
	printf("\n\nProcess\t\tTurnaroundtime\t\tWaitingtime");

	for (time = 0, i = 0; remain !=0;)
	{
		if(rt[i] <= qt && rt[i] > 0)
		{
		  time = time + rt[i];
		  rt[i] = 0;
		  flag = 1;

		}
		else if(rt[i] > 0)
		{
		  time = time + qt;
		  rt[i] = rt[i] - qt;
		}
		if (rt[i] == 0 && flag == 1)
		{
		  remain--;

		  wt = wt + time - at[i] - bt[i];
		  tat = tat + time - at[i];
		  flag = 0;
		  printf("\np[%d]\t\t    %d\t\t\t    %d",i + 1, time - at[i], time - at[i] - bt[i]);

		}
		if(i == number - 1)
		{
		 // i = 0;
		 continue;
		}
		else if(at[i + 1] <= time)
		{
		  i++;
		}
		else
		{
		  exit(0);
		}
       }
	printf("\nAverage waitng time is = %f", wt * 1.0 / number);
	printf("\nAverage turn around time is = %f", tat * 1.0 / number);
	getch();
}