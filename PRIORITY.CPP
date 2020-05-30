#include<ankur.h>
#include<stdlib.h>
#define max 30
void main()
{
	clrscr();
	int pro[max], pri[max], bt[max], temp, no, wt[max], tat[max], atat = 0 ;
	int i, j, k, sum = 0;
	int awt = 0;
	printf("Enter the number of processes: ");
	scanf("%d", &no);
	for (i = 0; i < no; i++)
	{
	  printf("Enter the process name: ");
	  scanf("%d", &pro[i]);
	//  printf("%d", pro[i]);
	}
	for (i = 0; i < no; i++)
	{
	  printf("Enter the burst time of the processes: ");
	  scanf("%d", &bt[i]);
	}
	for (i = 0; i < no; i++)
	{
	  printf("Enter the priority of the number: ");
	  scanf("%d", &pri[i]);
	}
	clrscr();
	printf("Processname \t Bursttime \t Prioritynumber");
	for (i = 0; i < no; i++)
	{
	  printf(" \n%d \t\t %d \t\t %d", pro[i], bt[i], pri[i]);
	}
	for (i = 0; i < no; i++)
	{
	  for (j = 0; j <= no - i - 1; j++)
	  {
	    if(pri[j] > pri[j + 1])
	    {
	      temp = pri[j];
	      pri[j] = pri[j + 1];
	      pri[j + 1] = temp;

	      temp = pro[j];
	      pro[j] = pro[j + 1];
	      pro[j + 1] = temp;

	      temp = bt[j];
	      bt[j] = bt[j + 1];
	      bt[j + 1] = temp;
	    }
	  }
	}
	wt[0] = 0;
	for (i = 1; i < no; i++)
	{
	  wt[i] = 0;
	  tat[i] = 0;
	  for ( j =1; j <= i; j++)
	  {
	    wt[i] = wt[i] + bt[i];
	  }
	  tat[i] = wt[i] + bt[i];
	  awt = awt + wt[i];
	  atat = atat + tat[i];
	}
	printf("\nProcessname \t Bursttime \t Prioritynumber \t waitingtime \ t turnaround");
	for (i = 0; i < no; i++)
	{
	  printf(" \n%d \t\t %d \t\t %d \t\t%d \t\t %d", pro[i], bt[i], pri[i], wt[i], tat[i]);
	}
	getch();
}

