#include<ankur.h>
#include<stdlib.h>
#include<time.h>

typedef struct student
{
	int age,marks ;
	char name[100] ;
}student ;
void main()
{
	title();
	int rownum = 0 ;
	student s[5] ;
	char ch ;
	char a[100] ;
	FILE *fp = fopen("C:\\student.txt","r");
	if( fp == NULL )
	{
	   printf(" FILE NOT FOUND ");
	   return;
	}
	int i ;
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
	  int j;
	 // printf(" i is %d\na[j] is %d", i, a[i]);
	  for(i = i + 1 ; a[i] != 44; i++)
	  {
	    m = m * 10 + (int)(a[i] - 48);
	   // printf("\n a[j] is%c", a[j]);
	   // s[rownum].age = m;
	  }
	 // printf("\n m is %d",m);
	  s[rownum].age = m;
	  int l = 0 ;
	  int k;
	  for(i = i + 1 ;a[i] != '\0' ; i++)
	  {
	     l = l * 10 + (int)(a[i]-48);
	    // s[rownum].marks = l;
	  }
	  s[rownum].marks = l;
	  printf("\n%s\t%d\t%d\t", s[rownum].name, s[rownum].age, s[rownum].marks);
	  rownum++;
	  ch = getc(fp);
	}
	// printf("\n%s\t%d\t%d\t", s[rownum].name, s[rownum].age, s[rownum].marks);
	fclose(fp);
	getch();
}
