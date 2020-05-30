#include<ankur.h>
#include<stdlib.h>
void main()
{
	char ch;
	FILE *fpt = fopen("\\newfile.txt", "w");
	fprintf(fpt, "hello");
	fclose(fpt);
	FILE *fp = fopen("\\newfile.txt", "r");
	if(fp == NULL)
	{
	  printf("FILE NOT FOUND");
	  return;
	}
	while( (ch = fgetc(fp)) != -1)
	{
	  printf("%c", ch);
	}
	fclose(fp);
	getch();
}