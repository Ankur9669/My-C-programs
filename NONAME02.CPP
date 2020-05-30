#include<stdio.h>
#include<conio.h>
int printcolumn(int s)
{
 int j,i;
 for(j=1;j<=i;j++)
 {
  printf("%d",j);
 }
 return s;
}
int printrow(int m)
{
 int i;
 for(i=1;i<=m;i++)
 {
  printcolumn(i);
  printf("\n");
 }
void main()
{
int i,s,m,j,k;
clrscr();
printf("enter the numbers:");
scanf("%d",&m);
s=printrow(m);
}

