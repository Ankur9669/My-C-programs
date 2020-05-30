#include<stdio.h>
#include<iostream.h>
#include<conio.h>
#include<string.h>

int menu()
{
 int i;
 printf("			WELCOME TO THE BANK MANAGEMENT SYSTEM\n");
 printf("enter 1 for new account\n");
 printf("enter 2 for viewing the existing acc\n");
 printf("enter 3 for deposit and transaction\n");
 printf("enter 4 for deleting the account\n");
 scanf("%d",&i);
 return i;
}
int newaccount()
{
 int no,c,dep,pin,accno=1,v,accno1,pin1;
 char name[100],add[100];
 clrscr();
 printf("ENTER THE NAME\n");
 scanf("%s",name);;
 printf("ENTER THE ADDRESS\n");
 scanf("%s",add);
 printf("ENTER THE MOBILE NO.\n");
 scanf("%d",&no);
 printf("enter 1 for saving acc\nenter 2 for current acc\n");
 scanf("%d",&c);
 printf("enter the pin of your acc");
 scanf("%d",&pin);
 printf("enter the amount to be deposited\n");
 scanf("%d",&dep);
 if(dep<500)
 {
  printf("deposited amount is less\n");
 }
 else
 {
  printf("congrtulations your account was created\n");
 }
 accno=accno+1001;
 printf("YOUR ACC NO IS=%d",accno);
 printf("ENTER 1 FOR VIEWING THE DETAILS OF YOUR ACCOUNT\n");
 scanf("%d",&v);
 if(v==1)
 {
  view();
 }
}
 void view()
 {

 if(v==1)
 {
  printf("enter the account no and the pin\n");
  scanf("%d%d",&accno1,&pin1);
  if(accno==accno1 && pin==pin1)
  {
   printf("    name is=%s\n",name);
   printf( "   bal is=%d\n",dep);
  }
 }
 return dep;
}
 void transact(int i)
{
 int a,b,c,d;
 printf("enter the account number\n");
 scanf("%d",&a);
 printf("enter the pin\n");
 scanf("%d",&b);
 printf("enter 1 for deposit and 2 for withdraw\n");
 scanf("%d",&c);
 if(c==1)
 {
  printf("enter the amount to be deposited\n");
  scanf("%d",&d);
  i=i+d;
  printf("total amount is=%d\n",i);
 }
 if(c==2)
 {
  printf("enter the amount to be deposited\n");
  scanf("%d",&d);
  if(i>d)
  {
   i=i-d;
   printf("the remaining balance is=%d\n",i);
  }
  else
  {
   printf("entered amouont is more\n");
  }
 }

}
 void main()
{
  int i,m;
  clrscr();
  i=menu();
  switch (i)
  {
   case 1:
   m=newaccount();
   break;

   case 2:
   transact(m);
   break;
  }
 getch();
}
