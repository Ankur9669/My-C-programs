//#include<stdio.h>
#include<conio.h>
#include<iostream.h>
void main()
{
 clrscr();
 int i=0,j,k,a[5],b[5],c[10];
 cout<<"enter the number";
 for(i=0;i<5;i++)
 {
   cin>>a[i];
 }
 cout<<"enter the number";
 for(i=0;i<5;i++)
 {
  cin>>b[i];

 }
 for(k=0;k<5;k++)
 {
  for(j=0;j<5;j++)
  {
   if(a[k]==b[j])
   {
    c[i]=b[j];
    i++;
    break;
   }
  }
 }
 for(k=0;k<i;k++)
 {
  cout<<c[k];
 }
 getch();

}