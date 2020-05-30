#include<ankur.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
typedef struct student
{
	int age,marks ;
	char name[100] ;
}student ;
void main()
{
	title();
	int rownum = 0 ;
	int flag = 0;
	student s[5] ;
	char ch ;
	char a[100] ;
	char str[100];
	int i, j;
	FILE *fp = fopen("C:\\abc.txt","r");
	if( fp == NULL )
	{
	   printf(" FILE NOT FOUND ");
	   return;
	}
   //	int i;
	ch = getc(fp);
	while( ch != EOF )
	{
	  fgets(a ,100 ,fp);
	  for(i = 0; a[i] != 44; i++)
	  {
	     s[rownum].name[i] = a[i] ;
	  }
	  s[rownum].name[i] = '\0';
	  int m = 0;
	  for(i = i + 1 ; a[i] != 44; i++)
	  {
	    m = m * 10 + (int)(a[i] - 48);
	  }
	  s[rownum].age = m;
	  int l = 0 ;
	  for(i = i + 1 ;a[i] != 0 && a[i] != 10 ; i++)
	  {
	     l = l * 10 + (int)(a[i] - 48);
	  }
	  s[rownum].marks = l;
	  printf("\n%s\t%d\t%d\t", s[rownum].name, s[rownum].age, s[rownum].marks);
	  rownum++;
	  ch = getc(fp);
	}
	fclose(fp);
	printf("Enter the string: ");
	scanf("%s", &a);
	for (i = 0; i < 5; i++)
	{
	  if(strcmp(s[i].name, a) == 0)
	  {
	    flag = 1;
	    break;
	  }
	  else
	  {
	    flag = 0;
	  }
	}
	if(flag == 1)
	{
	  printf("FOUND");
	}
	else
	{
	 printf("NOT FOUND");
	}
     //	str[] = "abc";
     //	printf("%s", str[1]);
	getch();
}
