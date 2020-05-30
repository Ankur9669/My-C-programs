#include<stdio.h>
#include<conio.h>
void main()
{
int i,s,m,n,k=0;
printf("\nhello");
printf("\nwelcome");
printf("\nquestion no 1");
printf("\nwhat is the capital of india? ");
printf("\n1 delhi \n2 mumbai \n3 nagpur \n4 jabalpr");
printf("\nenter the answer no.");

scanf("%d",&m);
if(m==1)
{
printf("\nyou won one crore!");
clrscr();
}
 if(m!=1)
  {
  printf("\noops you lose!");
  }
if(m==1)
{
printf("\nquestion no. 2");
printf("\nwhat is the capital of maharastra?");
printf("\n1 nagpur \n2 mumbai \n3 pune \n4 banglore");
printf("\nenter the answer no: ");
scanf("%d",&n);
if(n==2)
  {
printf("\nyour answer is correct and you won 2 crore!");
clrscr();
  }
  }
if(n!=2)
{
printf("\noops you lose");
}
if(n==2)
{
printf("\nquestion no 3:");
printf("\nwhat is the capital of madhya pradesh?");
printf("\n1 jabalpur \n2 bhopal \n3 rewa \n4 indore");
scanf("%d",&s);
if(s==2)
{
printf("you won 3 crore ");

}
}
if(s!=2)
{
printf("oops you lose");
}

}













