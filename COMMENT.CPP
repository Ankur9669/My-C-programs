#include<ankur.h>
#include<stdlib.h>
void main()
{
	FILE *fpt = fopen("n.txt", "r");
	char ch;
	char cha[100];
	clrscr();
	if(fpt == NULL)
	{
		printf("FILE NOT FOUND");
		return;
	}
	while( (ch = fgetc(fpt)) != EOF)
	{
		if(ch == '/')
		{
		  ch = fgetc(fpt);
		  if(ch == '/')
		  {
		      fgets(cha, 100, fpt);
		  }
		  else if( ch == '*')
		  {
		    while( (ch = fgetc(fpt)) != '/')
		    {
		       //	fgets(cha, 100, fpt);
		    }
		  }
		}
		else
		{
		  printf("%c", ch);
		}
	}
	fclose(fpt);
	getch();


}