#include<stdio.h>
void main()
{
int i,s,m,t,w,th,f,sa,n,j,k=0;
clrscr();

printf("\nenter the number");
scanf("%d%d",&m,&n);
printf("    s    m    t    w    th   f   sa\n");
for(i=1;i<n;i++)
{
printf("     ");
}
for(i=1;i<=m;i++)
{
printf("%5d",i);
if((n+i-1)%7==0)
printf("\n");
}
   }
