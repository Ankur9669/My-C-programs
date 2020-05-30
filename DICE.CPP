#include<ankur.h>
#include<stdlib.h>
#include<time.h>
void main()
{
   title();
   char a[100], ch;
   FILE *fp = fopen("C:\\student.txt","r");
   if(fp == NULL)
   {
     printf("FILE NOT FOUND");
     return;
   }
   ch = getc(fp);
   int start, end;
   start = time(NULL);
   end = time(NULL);
   while(ch != EOF)
   {
     fscanf(fp, "%s", a);
     printf("%s", a);
     ch = getc(fp);
   }
   end = time(NULL);
   printf("time is %d", end - start);
   fclose(fp);
   getch();
}
