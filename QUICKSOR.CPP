#include<ankur.h>
#include<stdlib.h>
void quicksort(int data[])
{
	int i = 0;
	int tempvar;
	int flag;
	int flag1 ,pivot ,var, j, k;
	  pivot = data[0];
	  var = 0;
	 // for ( j = 5 ; flag == 0 || j > 0; j--)
	 do
	 {
	  flag = 1;
	  flag1 = 1;
	  for (j = 5 ;j > var ; j--)
	  {
	    if (pivot > data[j])
	    {
	      tempvar = data[j];
	     //	printf("%d",tempvar);
	      data[j] = pivot;
	      data[var] = tempvar;
	      pivot = data[j];
	      var = j;y
	      flag = 0;
	    }
	  }
      //	  for ( k = 0; flag1 == 0 || k > 0; k++)
	  for ( k = 0; k < var; k++)
	  {
	   if (pivot < data[k])
	   {
	     tempvar = data[k];
	    // printf(" %d",tempvar);
	     data[k] = pivot;
	     data[var] = tempvar;
	     pivot = data[k];
	     var = k;
	     flag1 = 0;
	   }
	  }
	 }while( flag == 0 || flag1 == 0);
	 for (j = 0; j < 5; j++)
	 {
	   printf(" %d ",data[j]);
	 }

}

void main()
{       int data[5];
	int i;
	title();
	printf(" Enter the elements of the array ");
	for (i = 0; i < 5; i++)
	{
	  scanf("%d", &data[i]);
	}
	quicksort(data);
	getch();
}
