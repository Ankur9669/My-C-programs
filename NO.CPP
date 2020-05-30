#include<stdio.h>
#include<iostream.h>
#include<conio.h>
#include<string.h>
class a
{
 int x;
 public:
 int get()
 {
  cout<<"enter x=";
  cin>>x;
  return x;
 }
};
class b
{
 int y;
 public:
 int get1()
 {
  cout<<"enter y=";
  cin>>y;
  return y;
 }
};
class mul:public b,public a
{
 public:
 void sum()
 {
  cout<<get()+get1();
 }
};
void main()
{
 clrscr();
 mul c;
 c.sum();
 getch();
}