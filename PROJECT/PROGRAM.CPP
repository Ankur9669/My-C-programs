#include<stdio.h>
void main()
{
int i,s,m[5],e=0,o=0,z=0;
printf("enter the numbers ");
for(i=0;i<5;i++)
{
scanf("%d",&m[i]);
}
for(i=0;i<5;i++)
{
if(m[i]==0)
z=z+1;
else
if(m[i]%2!=0)
o=o+1;
else
e=e+1;
}
printf("odd=%d & even=%d & zero=%d",o,e,z);
}



