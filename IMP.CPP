#include<stdio.h>
#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int m,a,i,temp;
 cout<<"enter the number";
 cin>>m;
 while(m!=0)
 {
  a=m%10;
  if(a==0)
  {
   temp=(m/10)*10+1;
  }
  else
  {
   temp=(m/10)*10+1;
  }
  m=m/10;
 }
 cout<<temp;
}