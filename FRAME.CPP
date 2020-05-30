#include<ankur.h>
void main()
{
	clrscr();
	int a[10], i, j, k, nof,nop, count = 0, frame[10], avail;
	printf("\nEnter the number of pages: ");
	scanf("%d", &nop);
	printf("\nEnter the numeber of frames: ");
	scanf("%d", &nof);
	printf("\nEnter the pages: ");
	for (i = 0; i < nop; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("\nEnter the number of frames: ");
	for (i = 0; i < nof; i++)
	{
		frame[i] = -1;
	}
	printf("\n\t RefString  \tPage\tFrames\n");
	for (i = 0; i < nop; i++)
	{
		printf("%d\t\t", a[i]);
		avail = 0;
		for (k = 0; k < nof; k++)
		if(frame[k] == a[i])
		{
		   avail = 1;
		}
		if(avail == 0)
		{
		   frame[j] = a[i];
		   j = ((j + 1) % nof);
		   count++;
		   for (k = 0; k < nof; k++)
		   {
		     printf(" %d\t", frame[k]);
		   }
		}
		printf("\n");
	}
	printf("Page fault is %d", count);
	getch();
}
