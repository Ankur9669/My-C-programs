#include<ankur.h>
#include<stdlib.h>
void main()
{
	clrscr();
	FILE *file2 = fopen("C:\\hello.txt", "r");
	if(file2 == NULL)
	{
	  printf("FILE NOT FOUND");
	  return;
	}
	char ch;
	while((ch = getc(file2)) != EOF);
	{
	  printf("%c", ch);
	}
	fclose(file2);
	getch();
}












