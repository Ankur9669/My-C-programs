
#include<stdlib.h>
#include<dos.h>
#include<ankur.h>
void main()
{
	clrscr();
	int i;
	int j;
	int k;
	int startinghour;
	int startingmin;
	int startingsec;
	printf("Enter the starting hour:");
	scanf("%d", &startinghour);
	startinghour = startinghour -1;
	printf("\nEnter the starting min:");
	scanf("%d", &startingmin);
	startingmin = startingmin - 1;
  //	printf("\nEnter the starting second:");
    //	scanf("%d", &startingsec);
      //	startingsec = startingsec - 1;
	for (i = 1; startinghour <= 24; i++)
	{
	 // clrscr();
	  if(startinghour == 23)
	  {
	    startinghour = 1;
	   // break;
	  }
	  else
	  {
	    startinghour++;
	  }
	  for (j = 1; startingmin < 60; j++)
	  {
	    if(startingmin == 59)
	    {
	      startingmin = 0;
	      break;
	    }
	    else
	    {
	      startingmin++;
	    }
	    for (k = 1; k <= 5; k++)
	    {
	      if(!kbhit())
	      {
		clrscr();
		gotoxy(40, 13);
		printf("%d : %d : %d ",startinghour, startingmin, k);
		delay(1000);
	      }
	      else
	      {
		exit(0);
	      }
	    }
	  }
	}
	getch();
}