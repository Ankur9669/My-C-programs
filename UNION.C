#include<stdio.h>
#include<conio.h>
//#include<iostream.h>
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
 for(i=0;i<5;i++)
 {
  c[i]=a[i];
  for(j=0;j<5;j++)
  {
   for(k=0;k<5;k++)
   {
    if(b[j]==a[k])
    break;
   }
   if(k==5)
   {
    c[i]=b[j];
    i++;
   }
  }
 }
 for(k=0;k<i;k++)
 {
  printf("%d",c[k]);
 }
 getch();
}


