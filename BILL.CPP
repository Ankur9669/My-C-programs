#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class check
{
  int i,j,k,ans;
  public:
  void calu(int a)
  {
   for(i=1;i<=a;i++)
   {
    k=i*i;
    if(k<=a)
    {
      ans=k;
    }
    else
    if(k>a)
    {
     break;
    }
   }
   cout<<k;
  }
}




void main()
{
 int a,i,j,m;
 check obj;
 cout<<"enter the number";
 cin>>m;
 obj.calu(m);
 getch();
}