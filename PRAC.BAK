#include<conio.h>
#include<iostream.h>
#include<stdio.h>
class calculate
{
    float hra,da,allow,pf;
    public:
    void a(int basic)
    {
      hra=(basic/100)*20;
    }
    void b(int basic)
    {
     da=(basic/100)*50;
    }
    void c(char c)
    {
      if(c=='A' || c=='a')
      {
       allow==1700;
      }
      else
      if(c=='B' || c=='b')
      {
       allow==1500;
      }
      else
      if(c=='C' || c=='c')
      {
       allow==1300;
      }
     }
     void d(int basic)
     {
      pf=(basic/100)*11;
     }
     void total(int basic)
     {
      cout<<basic+hra+da+allow-pf;
     }
};

void main()
{
 calculate obj;
 clrscr();
 int basic;
 char m;
 cout<<"enter the basic salary";
 cin>>basic;
 cout<<"enter the grade";
 cin>>m;
 obj.a(basic);
 obj.b(basic);
 obj.c(m);
 obj.d(basic);
 obj.total(basic);
 getch();
}