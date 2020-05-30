#include<ankur.h>
#include<stdlib.h>
#include<string.h>
void main()
{
	clrscr();
     long int i, n, m, s;
       printf("ENter the number of prisoners:");
       scanf("%ld", &n);
       printf("Enter the number of candies");
       scanf("%ld", &m);
       printf("Enter the starting point");
       scanf("%ld", &s);
       for (i = 1; i <= m; i++)
       {
	 if(s == m)
	 {
	   s = 1;
	 }
	 else
	 {
	   s++;
	 }
       }
       printf("%d", s);
       getch();
}




