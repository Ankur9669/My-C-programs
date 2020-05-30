#include<stdio.h>
#include<conio.h>
void main()
{
 int i,j,m,k,l;
 printf("enter the number");
 scanf("%d",&m);
 for(i=1;i<=m;i++)
 {
  for(j=2;j<m/2;j++)
  {
   if(i%j==0)
   {
    break;
   }
   else
   {
    printf("%d\n",i);
    break;
   }
  }
 }
  for(i=m;i>=1;i--)
  {
   for(j=2;j<=m/2;j++)
   {
    if(i%j==0)
    {
     break;
    }
    else
    {
     printf("         %d\n",i);
     break;
    }
   }
  }
  getch();
}


