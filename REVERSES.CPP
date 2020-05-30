#include<iostream.h>
#include<conio.h>
#include<stdio.h>

#include<string.h>
void main()
{
 int i,j=0,temp=0,countstr=0,countstr2=0;
 char str[20],str2[20];
 clrscr();
 cout<<"\nenter first string;";
 gets(str);
 for(i=0;str[i]!=0;i++)
 {
  countstr=countstr+1;
 }
 cout<<countstr<<"length of str2;";
 i=0;
 j=countstr-1;
 while(i<j)
 {
  temp=str[i];
  str[i]=str[j];
  str[j]=temp;
  i++;
  j--;
 }
 cout<<"the reverse of string:" << str;
}
