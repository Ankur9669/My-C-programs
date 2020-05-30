#include<ankur.h>
#include<stdlib.h>
int find(int n)
{
	int step = 0;
	if(n == 0)
	{
	  return n;
	}
	else
	if(n % 2 != 0 && n % 3 !=0)
	{
	  step++;
	  return find(n - 1);
	}
	else if(n % 2 == 0)
	{
	  step++;
	  return find(n / 2);
	}
	else if(n % 3 == 0)
	{
	  step++;
	  return find(n / 3);
	}

}



void main()
{
  title();
  int n, m, step = 0, temp;
  printf(" Enter the integer ");
  scanf("%d", &m);
  find(m);
/*  temp = m;
  while ( temp > 0)
  {
    if (temp % 2 != 0 && temp % 3 != 0)
    {
     temp = temp - 1;
     step++;
    }
    else if(temp % 2 == 0)
    {
      temp = temp / 2;
      step++;
    }
    else if (temp % 3 == 0)
    {
      temp = temp / 3;
      step++;
    }
  }
  printf("%d", step);   */
  getch();
}


