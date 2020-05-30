#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<iostream.h>
void main()
{
  clrscr();
  int i,maxsize=7,ans;
  srand(time(NULL));
  do
  {
	 printf("\nEnter 1 for roll: ");
	 scanf("%d",&i);
	 if(i==1)
	 {
	  ans=rand()%maxsize;
	  while(ans==0)
	  {
	   ans=rand()%maxsize;
	  }
	   printf("\nAns is= %d",ans);
	  }

  }while(i==1);

  getch();
}
