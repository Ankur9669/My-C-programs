#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<stack.h>
void main()
{
	title();
	int number;
	int choice;
	printf("Enter the number of elements of the list: ");
	scanf("%d", &number);
	pushinstack(number);
	printstack();
	peepinstack();
	popstack();
	getch();
}