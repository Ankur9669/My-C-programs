#include<stdio.h>
#include<conio.h>

void main()
{
  char s[100];
  FILE *file = fopen("C:\\hello.txt", "w");
  if(file == NULL)
  {
    printf("NOT POSSIBLE");
    return;
  }
  printf("Enter the string");
  scanf("%s", s);
  fprintf(file, "%s", s);
  fclose(file);

 // char s[100];
  FILE *file1 = fopen("C:\\hello.txt", "r");
  if(file1 == NULL)
  {
    printf("NOT POSSIBLE");
    return;
  }
  printf("%s", fgets(s, 100, file1));
  fclose(file1);
  getch();
}