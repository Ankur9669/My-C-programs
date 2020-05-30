#include<ankur.h>
#include<stdlib.h>
typedef struct student
{
	int age;
	int marks;
	char name[100];
}student;


int readIntCol(char *a, int *index)
{
	int m = 0;
	while (a[*(index)] != 44 && a[*(index)] != '\0')
	{
		//printf("\n Index %d\n", *index);
		m = 50;//(m * 10) + ((int)a[*(index)]);
		*(index)++;
	}
	return m;
}


void main()
{
	title();
	student s[4] ;
	int i ;
	char ch , a[100] ;
	clrscr();
	FILE *fp = fopen( "C:\\student.txt" , "r" );
	if( fp == NULL )
	{
	  printf( " FILE NOT FOUND " );
	  return;
	}
	int j, k, rownum = 0;
	ch = getc(fp);
	while (ch != EOF)
	{
	  fgets(a, 100, fp);
	  for (i = 0; a[i] != 44; i++)
	  {
	    s[rownum].name[i] = a[i];
	   // printf("%c", a[i]);
	  }
	  s[rownum].name[i]='\0';
      //	  printf("\n%s",s[rownum].name);
	  int m = 0;
	  for (i = i; a[i] != 44; i++)
	  {
	     m = m * 10 +(int)a[i]-'0';
	     s[rownum].age = m;
	    //s[rownum].name[i] = a[i];
	   // printf("%c", a[i]);
	  }
	//  printf("\n%d",s[rownum].age);
	  int l = 0;
	  for (i = i; a[i] != '\0'; i++)
	  {
	    l = l * 10 + (int)a[i] ;
	    s[rownum].marks =l;
      //	  }

	   // printf("%c", a[k]);
	  }
       //	  printf("\n%d",s[rownum].marks);
	 // s[rownum].age = readIntCol(a, &i);
	 // s[rownum].marks = 3;//readIntCol(a, &i);

	  printf("%s \t\t%d \t%d\n", s[rownum].name, s[rownum].age, s[rownum].marks);
	  rownum++;
	  ch = getc(fp);
	 }
	 fclose(fp);
	 getch();
}


