#include<stdio.h>
void main()
{
int i,t,s,n=0,m,j=0;
printf("\nenter the number ");
scanf("%d",&m);
while(m>0)
{
t=m;
m=m/10;
n=n+1;
}
while(m>0)
{
t=m%10;
s=s+t;
}
printf("%d",s);
printf("%d",n);
}



