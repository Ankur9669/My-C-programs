#include<stdio.h>
#include<conio.h>
void main()
{
 FILE *fp;
 int age;
 char name[20];
 clrscr();
 fp=fopen("C:\\emp.rec","w");
 if(fp==NULL)
 {
  printf("not possible");
  return;
 }

 printf("enter the age");
 scanf("%d",&age);
  fprintf(fp,"age=%d\n",age);
 printf("enter the name");
 scanf("%s",name);
  fprintf(fp,"name=%s\n",name);
 fclose(fp);
 getch();
}