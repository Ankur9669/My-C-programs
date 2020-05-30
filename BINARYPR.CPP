#include<stdio.h>
#include<conio.h>
#include<iostream.h>
int binarytodecimal(int i)
{
 int m=1,t=0;
 while(i!=0)
 {
  t=t+m*i%10;
  m=m*2;
  i=i/10;
 }
 return t;
}
int binarytooctal(int i)
{
 int m=1,t=0;
 while(i!=0)
 {
  t=t+m*(i%10);
  m=m*8;
  i=i/10;
 }
 return t;
}
int binarytohexa(int i)
{
 int m=1,t,v=0;
 while(i!=0)
 {
  t=i%1000;
  while(t!=0)
  {
   v=v+t%10;
   m=m*16;
   t=t/10;
  }
   i=i/10;
 }
 return t;
}



void main()
{
 clrscr();
 int m,a;
 printf("enter 1 for binary to decimal\nenter 2 for binary to octal\nenter 3 for binary to hexa\n");
 printf("enter 4 for octal to binary\nenter 5 for octal to decimal\nenter 6 for octal to hexa\n");
 printf("enter 5 for decimal to octal\nenter 6 for decimal to binary\nenter 7 for decimal to hexa\n");
 printf("enter 8 for hexa to octal\nenter 9 for hexa to binary\nenter 10 for hexa to decimal\n");
 scanf("%d",&m);
 printf("enter the number to be coverted");
 scanf("%d",&a);
 switch(m)
 {
	case 1:
	printf("%d",binarytodecimal(a));
	break;

	case 2:
	printf("%d",binarytooctal(a));
	break;
 }
 getch();
}


