#include<stdio.h>
#include<conio.h>
void main()
{
  int i,s,j,m,a,b,c,d,e,f,g,h,k,l,n;
  char p[3][3]={
  {'1','2','3'},
  {'4','5','6'},
  {'7','8','9'}
  } ;
  clrscr();
  printf("WELCOME TO TIC TAC TOE ");
  printf("\nSYM  PLAYER 1=* ");
  printf("\nSYM  PLAYER 2=o");
  for(i=0;i<3;i++)
  {
   for(j=0;j<3;j++)
   {
    printf("\n%d",p[i][j]);
    }
   }

  for(i=1;i<=3;i++)
  {
   printf("\t         |     |     \n");

   }
   printf("\t    _%c___|_%c___|_%c__",p[0][0],p[0][1],p[0][2]);
   for(i=1;i<=3;i++)
   {
   printf("\t         |     |     \n");
    }
   printf("\t    _%c___|_%c___|_%c___",p[1][0],p[1][1],p[1][2]);
   for(i=1;i<=3;i++)
   {
   printf("\t         |     |     \n");
   }
   printf("\t    _%c___|_%c___|_%c___",p[2][0],p[2][1],p[2][2]);
   for(i=1;i<=3;i++)
   {
    printf("\t         |     |     \n");
   }

   printf("PLAYER 1=*");
   printf("\nenter the number");
   scanf("%d",&m);
   if(m==1)
   {
    p[0][0]='*';

   }
   printf("*");
   if(m==2)
   {
    p[0][1]='*';

   }
   printf("*");
   if(m==3)
   {
    p[0][2]='*';

   }
   printf("*");
   if(m==4)
   {
    p[1][0]='*';

   }
   printf("*");
   if(m==5)
   {
    p[1][1]='*';

   }
   printf("*");
   if(m==6)
   {
    p[1][2]='*';

   }
   printf("*");
   if(m==7)
   {
    p[2][0]='*';

   }
   printf("*");
   if(m==8)
   {
    p[2][1]='*';

   }
   printf("*");
   if(m==9)
   {
    p[2][2]='*';

   }
   printf("*");



  for(i=1;i<=3;i++)
  {
   printf("\t         |     |     \n");

   }
   printf("\t    _%c___|_%c___|_%c__",p[0][0],p[0][1],p[0][2]);
   for(i=1;i<=3;i++)
   {
   printf("\t         |     |     \n");
    }
   printf("\t    _%c___|_%c___|_%c___",p[1][0],p[1][1],p[1][2]);
   for(i=1;i<=3;i++)
   {
   printf("\t         |     |     \n");
   }
   printf("\t    _%c___|_%c___|_%c___",p[2][0],p[2][1],p[2][2]);
   for(i=1;i<=3;i++)
   {
    printf("\t         |     |     \n");
}
   printf("SYM PLAYER 2=O");
   printf("\nenter the number");
   scanf("%d",&a);
   if(a==1)
   {
    p[0][0]='o';
   }
   printf("o");
   if(a==2)
   {
    p[0][1]='o';
   }
   printf("o");
   if(a==3)
   {
    p[0][2]='o';
   }
   printf("o");
   if(a==4)
   {
    p[1][0]='o';
   }
   printf("o");
   if(a==5)
   {
    p[1][1]='o';
   }
   printf("o");
   if(a==6)
   {
    p[1][2]='o';
   }
   printf("o");
   if(a==7)
   {
    p[2][0]='o';
   }
   printf("o");
   if(a==8)
   {
    p[2][1]='o';
   }
   printf("o");
   if(a==9)
   {
    p[2][2]='o';
   }
   printf("o");




  for(i=1;i<=3;i++)
  {
   printf("\t         |     |     \n");

   }
   printf("\t    _%c___|_%c___|_%c__",p[0][0],p[0][1],p[0][2]);
   for(i=1;i<=3;i++)
   {
   printf("\t         |     |     \n");
    }
   printf("\t    _%c___|_%c___|_%c___",p[1][0],p[1][1],p[1][2]);
   for(i=1;i<=3;i++)
   {
   printf("\t         |     |     \n");
   }
   printf("\t    _%c___|_%c___|_%c___",p[2][0],p[2][1],p[2][2]);
   for(i=1;i<=3;i++)
   {
    printf("\t         |     |     \n");
   }
   printf("SYM PLAYER 1=*");
   printf("\nenter the number");
   scanf("%d",&b);
   if(b==1)
   {
    p[0][0]='*';
   }
   printf("*");
   if(b==2)
   {
    p[0][1]='*';
   }
   printf("*");
   if(b==3)
   {
    p[0][2]='*';
   }
   printf("*");
   if(b==4)
   {
    p[1][0]='*';
   }
   printf("*");
   if(b==5)
   {
    p[1][1]='*';
   }
   printf("*");
   if(b==6)
   {
    p[1][2]='*';
   }
   printf("*");
   if(b==7)
   {
    p[2][0]='*';
   }
   printf("*");
   if(b==8)
   {
    p[2][1]='*';
   }
   printf("*");
   if(b==9)
   {
    p[2][2]='*';
   }
   printf("*");


  for(i=1;i<=3;i++)
  {
   printf("\t         |     |     \n");

   }
   printf("\t    _%c___|_%c___|_%c__",p[0][0],p[0][1],p[0][2]);
   for(i=1;i<=3;i++)
   {
   printf("\t         |     |     \n");
    }
   printf("\t    _%c___|_%c___|_%c___",p[1][0],p[1][1],p[1][2]);
   for(i=1;i<=3;i++)
   {
   printf("\t         |     |     \n");
   }
   printf("\t    _%c___|_%c___|_%c___",p[2][0],p[2][1],p[2][2]);
   for(i=1;i<=3;i++)
   {
    printf("\t         |     |     \n");
   }


   printf("SYM PLAYER 2=O");
   printf("\nenter the number");
   scanf("%d",&c);
   if(c==1)
   {
    p[0][0]='o';
   }
   printf("o");
   if(c==2)
   {
    p[0][1]='o';
   }
   printf("o");
   if(c==3)
   {
    p[0][2]='o';
   }
   printf("o");
   if(c==4)
   {
    p[1][0]='o';
   }
   printf("o");
   if(c==5)
   {
    p[1][1]='o';
   }
   printf("o");
   if(c==6)
   {
    p[1][2]='o';
   }
   printf("o");
   if(c==7)
   {
    p[2][0]='o';
   }
   printf("o");
   if(c==8)
   {
    p[2][1]='o';
   }
   printf("o");
   if(c==9)
   {
    p[2][2]='o';
   }
   printf("o");


  for(i=1;i<=3;i++)
  {
   printf("\t         |     |     \n");

   }
   printf("\t    _%c___|_%c___|_%c__",p[0][0],p[0][1],p[0][2]);
   for(i=1;i<=3;i++)
   {
   printf("\t         |     |     \n");
    }
   printf("\t    _%c___|_%c___|_%c___",p[1][0],p[1][1],p[1][2]);
   for(i=1;i<=3;i++)
   {
   printf("\t         |     |     \n");
   }
   printf("\t    _%c___|_%c___|_%c___",p[2][0],p[2][1],p[2][2]);
   for(i=1;i<=3;i++)
   {
    printf("\t         |     |     \n");
   }


   printf("SYM PLAYER 1=*");
   printf("\nenter the number");
   scanf("%d",&d);
   if(d==1)
   {
    p[0][0]='*';
   }
   printf("*");
   if(d==2)
   {
    p[0][1]='*';
   }
   printf("*");
   if(d==3)
   {
    p[0][2]='*';
   }
   printf("*");
   if(d==4)
   {
    p[1][0]='*';
   }
   printf("*");
   if(d==5)
   {
    p[1][1]='*';
   }
   printf("*");
   if(d==6)
   {
    p[1][2]='*';
   }
   printf("*");
   if(d==7)
   {
    p[2][0]='*';
   }
   printf("*");
   if(d==8)
   {
    p[2][1]='*';
   }
   printf("*");
   if(d==9)
   {
    p[2][2]='*';
   }
   printf("*");


  for(i=1;i<=3;i++)
  {
   printf("\t         |     |     \n");

   }
   printf("\t    _%c___|_%c___|_%c__",p[0][0],p[0][1],p[0][2]);
   for(i=1;i<=3;i++)
   {
   printf("\t         |     |     \n");
    }
   printf("\t    _%c___|_%c___|_%c___",p[1][0],p[1][1],p[1][2]);
   for(i=1;i<=3;i++)
   {
   printf("\t         |     |     \n");
   }
   printf("\t    _%c___|_%c___|_%c___",p[2][0],p[2][1],p[2][2]);
   for(i=1;i<=3;i++)
   {
    printf("\t         |     |     \n");
   }

   printf("SYM PLAYER 2=O");
   printf("\nenter the number");
   scanf("%d",&e);
   if(e==1)
   {
    p[0][0]='o';
   }
   printf("o");
   if(e==2)
   {
    p[0][1]='o';
   }
   printf("o");
   if(e==3)
   {
    p[0][2]='o';
   }
   printf("o");
   if(e==4)
   {
    p[1][0]='o';
   }
   printf("o");
   if(e==5)
   {
    p[1][1]='o';
   }
   printf("o");
   if(e==6)
   {
    p[1][2]='o';
   }
   printf("o");
   if(e==7)
   {
    p[2][0]='o';
   }
   printf("o");
   if(e==8)
   {
    p[2][1]='o';
   }
   printf("o");
   if(e==9)
   {
    p[2][2]='o';
   }
   printf("o");


  for(i=1;i<=3;i++)
  {
   printf("\t         |     |     \n");

   }
   printf("\t    _%c___|_%c___|_%c__",p[0][0],p[0][1],p[0][2]);
   for(i=1;i<=3;i++)
   {
   printf("\t         |     |     \n");
    }
   printf("\t    _%c___|_%c___|_%c___",p[1][0],p[1][1],p[1][2]);
   for(i=1;i<=3;i++)
   {
   printf("\t         |     |     \n");
   }
   printf("\t    _%c___|_%c___|_%c___",p[2][0],p[2][1],p[2][2]);
   for(i=1;i<=3;i++)
   {
    printf("\t         |     |     \n");
   }

   printf("SYM PLAYER 1=*");
   printf("\nenter the number");
   scanf("%d",&f);
   if(f==1)
   {
    p[0][0]='*';
   }
   printf("*");
   if(f==2)
   {
    p[0][1]='*';
   }
   printf("*");
   if(f==3)
   {
    p[0][2]='*';
   }
   printf("*");
   if(f==4)
   {
    p[1][0]='*';
   }
   printf("*");
   if(f==5)
   {
    p[1][1]='*';
   }
   printf("*");
   if(f==6)
   {
    p[1][2]='*';
   }
   printf("*");
   if(f==7)
   {
    p[2][0]='*';
   }
   printf("*");
   if(f==8)
   {
    p[2][1]='*';
   }
   printf("*");
   if(f==9)
   {
    p[2][2]='*';
   }
   printf("*");



  for(i=1;i<=3;i++)
  {
   printf("\t         |     |     \n");

   }
   printf("\t    _%c___|_%c___|_%c__",p[0][0],p[0][1],p[0][2]);
   for(i=1;i<=3;i++)
   {
   printf("\t         |     |     \n");
    }
   printf("\t    _%c___|_%c___|_%c___",p[1][0],p[1][1],p[1][2]);
   for(i=1;i<=3;i++)
   {
   printf("\t         |     |     \n");
   }
   printf("\t    _%c___|_%c___|_%c___",p[2][0],p[2][1],p[2][2]);
   for(i=1;i<=3;i++)
   {
    printf("\t         |     |     \n");
   }


   printf("SYM PLAYER 2=O");
   printf("\nenter the number ");
   scanf("%d",&h);
   if(h==1)
   {
    p[0][0]='o';
   }
   printf("o");
   if(h==2)
   {
    p[0][1]='o';
   }
   printf("o");
   if(h==3)
   {
    p[0][2]='o';
   }
   printf("o");
   if(h==4)
   {
    p[1][0]='o';
   }
   printf("o");
   if(h==5)
   {
    p[1][1]='o';
   }
   printf("o");
   if(h==6)
   {
    p[1][2]='o';
   }
   printf("o");
   if(h==7)
   {
    p[2][0]='o';
   }
   printf("o");
   if(h==8)
   {
    p[2][1]='o';
   }
   printf("o");
   if(h==9)
   {
    p[2][2]='o';
   }
   printf("o");




  for(i=1;i<=3;i++)
  {
   printf("\t         |     |     \n");

   }
   printf("\t    _%c___|_%c___|_%c__",p[0][0],p[0][1],p[0][2]);
   for(i=1;i<=3;i++)
   {
   printf("\t         |     |     \n");
    }
   printf("\t    _%c___|_%c___|_%c___",p[1][0],p[1][1],p[1][2]);
   for(i=1;i<=3;i++)
   {
   printf("\t         |     |     \n");
   }
   printf("\t    _%c___|_%c___|_%c___",p[2][0],p[2][1],p[2][2]);
   for(i=1;i<=3;i++)
   {
    printf("\t         |     |     \n");
   }

   printf("SYM PLAYER 1=*");
   printf("\nenter the number");
   scanf("%d",&k);
   if(k==1)
   {
    p[0][0]='*';
   }
   printf("*");
   if(k==2)
   {
    p[0][1]='*';
   }
   printf("*");
   if(k==3)
   {
    p[0][2]='*';
   }
   printf("*");
   if(k==4)
   {
    p[1][0]='*';
   }
   printf("*");
   if(k==5)
   {
    p[1][1]='*';
   }
   printf("*");
   if(k==6)
   {
    p[1][2]='*';
   }
   printf("*");
   if(k==7)
   {
    p[2][0]='*';
   }
   printf("*");
   if(k==8)
   {
    p[2][1]='*';
   }
   printf("*");
   if(k==9)
   {
    p[2][2]='*';
   }
   printf("*");



  for(i=1;i<=3;i++)
  {
   printf("\t         |     |     \n");

   }
   printf("\t    _%c___|_%c___|_%c__",p[0][0],p[0][1],p[0][2]);
   for(i=1;i<=3;i++)
   {
   printf("\t         |     |     \n");
    }
   printf("\t    _%c___|_%c___|_%c___",p[1][0],p[1][1],p[1][2]);
   for(i=1;i<=3;i++)
   {
   printf("\t         |     |     \n");
   }
   printf("\t    _%c___|_%c___|_%c___",p[2][0],p[2][1],p[2][2]);
   for(i=1;i<=3;i++)
   {
    printf("\t         |     |     \n");
   }

   if(p[0][0]=='*' && p[0][1]=='*' && p[0][2]=='*')
   {
    printf("PLAYER ONE WON");
   }
   if(p[1][0]=='*' && p[1][1]=='*' && p[1][2]=='*')
   {
    printf("PLAYER ONE WON");
   }
   if(p[2][0]=='*' && p[2][1]=='*' && p[2][2]=='*')
   {
    printf("PLAYER ONE WON");
   }
   if(p[0][0]=='*' && p[1][0]=='*' && p[2][1]=='*')
   {
    printf("PLAYER ONE WON");
   }
   if(p[0][1]=='*' && p[1][1]=='*' && p[0][2]=='*')
   {
    printf("PLAYER ONE WON");
   }
   if(p[0][0]=='*' && p[1][1]=='*' && p[2][3]=='*')
   {
    printf("PLAYER ONE WON");
   }
   if(p[0][2]=='*' && p[1][1]=='*' && p[2][1]=='*')
   {
    printf("PLAYER ONE WON");
   }



   if(p[0][0]=='o' && p[0][1]=='o' && p[0][2]=='o')
   {
    printf("PLAYER TWO WON");
   }

   if(p[1][0]=='o' && p[1][1]=='o' && p[1][2]=='o')
   {
    printf("PLAYER TWO WON");
   }
   if(p[2][0]=='o' && p[2][1]=='o' && p[2][2]=='o')
   {
    printf("PLAYER TWO WON");
   }
   if(p[0][0]=='o' && p[1][0]=='o' && p[2][1]=='o')
   {
    printf("PLAYER TWO WON");
   }
   if(p[0][1]=='o' && p[1][1]=='o' && p[0][2]=='o')
   {
    printf("PLAYER TWO WON");
   }
   if(p[0][0]=='o' && p[1][1]=='o' && p[2][3]=='o')
   {
    printf("PLAYER TWO WON");
   }
   if(p[0][2]=='o' && p[1][1]=='o' && p[2][1]=='o')
   {
    printf("PLAYER TWO WON");
   }
   else
   printf("THE GAME IS DRAW");






























































































































}


































































































































































































































































































































































































