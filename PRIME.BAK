#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<string.h>
int findprime(int n)
{
 int i,j,p,flag=1;
 for(i=2;i<=n/2;i++)
 {
  if(n%i==0)
  {
   flag=0;
   p=i;

  }
  else
  {
   flag=1;
  }
 }
  if(flag==0)
  {
   return p;
  }
 }



void main()
{
  int i,m,p,n;
  clrscr();
  cout<<"enter the number";
  cin>>m;
  i=findprime(m);
  cout<<i;
}