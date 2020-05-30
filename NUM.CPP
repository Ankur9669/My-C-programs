#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
 int i,j,m,add=1;
 cout<<"enter the number";
 cin>>m;
 while(m!=0)
 {

  if(m%10==0)
  {
   temp=temp+add;
  }
   add=add*10;
   m=m/10;
 }
 cout<<temp;
 getch();
}

