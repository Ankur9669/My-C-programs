#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
void printfabonnacci(int m)
{
   int i, j = 0;
   if (i == m)
   {
     return 1;
   }
   else
   {
     j++;
     return i + printfabbonacci(i + 1);
   }

void main()
{
  int i;
  int m;
  printf(" Enter the number till fabonacci has to be print: ");
  scanf("%d", &m);
  printfabonnacci(m);
  getch();
}