#include<stdio.h>
#include<conio.h>
void main()
{
  int i,s,m ,j=0;
  clrscr();
  printf("\nHELLO");
  printf("\nYOUR WINDOWS IS STARTING");
  printf("\nENTER THE PASSWORD: ");
  scanf("%d",&m);
  printf("\nCONFIRM YOUR PASSWORD:");
  scanf("%d",&j);
  if(m==j)
   {
    printf("\nYOU ARE ALL SET");
   }
  while(m!=j)
   {
    printf("\nyou have written wrong password");
    printf("\nCONFIRM YOUR PASSWORD");
    scanf("%d",&s);
    if(m==s)
     {
      printf("\nYOU ARE ALL SET");
      break;
     }
   }
}



