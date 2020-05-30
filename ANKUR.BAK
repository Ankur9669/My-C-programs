#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	clrscr();
	char *str[5], *str1, *str2;
	int i, length[5], max , min, j = 0, k = 0;
	for (i = 0; i < 5; i++)
	{
	  printf("Enter the string:");
	  scanf("%s", str[i]);
	}
	max = strlen(str[0]);
	min = strlen(str[0]);
	for (i = 0; i < 5; i++)
	{
	  length[i] = strlen(str[i]);
     //	  printf("length is = %d", length[i]);
	  if( max <= length[i] )
	  {
	    max = length[i];
	    str1 = str[i];

	  }
	  if( min >= length[i] )
	  {
	    min = length[i];
	    str2 = str[i];

	  }
	}
   /*	for (i = 0; i < j; i++)
	{
	  printf("\nThe String with max number is = %s ",str1[i]);
	}
	for (i = 0; i < k; i++)
	{
	  printf("\nThe String with min numbers is = %s ", str2[i]);
	}   */
	printf("\nMax string is = %s", str1);
	printf("\nMin string is = %s", str2);

	getch();

}
