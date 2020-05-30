#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<iostream.h>
void title()
{
 int i;
 clrscr();
 for(i=0;i<=105;i++)
 {
  printf("*");
 }
 printf(" WELCOME TO MY PROGRAM ");
 for(i=0;i<30;i++)
 {
  printf("*");
 }
 for(i=0;i<=80;i++)
 {
  printf("*");
 }
}
void password(char b[100])
{
 FILE *fp=fopen("C:\\student.txt","w");
 if(fp==NULL)
 {
  printf("file cannot be created.");
  return;
 }
 fprintf(fp,"%s",b);
 fclose(fp);
}
int validate(char a[100])
{
 FILE *fp=fopen("C:\\student.txt","r");
 char pass[100];
 int flag=0;
 if(fp==NULL)
 {
  printf("File not found.");
  return 0;
 }
 fgets(pass,100,fp);
 if(strcmp(pass,a)==0)
 {
  flag=0;
 }
 else
 {
  flag=1;
 }
 return flag;
}
void sum()
{
 title();
 int a,b;
 printf("Enter two numbers: ");
 scanf("%d%d",&a,&b);
 printf("%d",a+b);
}

void main()
{
 title();
 char a[100],b[100];
 int m;
 printf("Enter the password to be entered in the file: ");
 scanf("%s",a);
 password(a);
 title();
 printf("Please enter the password to be validated: ");
 scanf("%s",b);
 m=validate(b);
 if(m==1)
 {
  printf("Incorrect");
 }
 else
 {
  sum();
 }
 getch();
}
