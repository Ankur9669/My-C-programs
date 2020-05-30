#include<stdio.h>
#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
  clrscr();
  char a='a';
  int i,j,m,k;
  cout<<"enter the number of rows";
  cin>>m;

  for(i=1;i<=m;i++)
  {
   k=m+1-i;
   for(j=1;j<=i;j++)
   {

     cout<<k++;

   }
   cout<<"\n";
  }
  getch();
}
