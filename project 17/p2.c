#include <stdio.h>
void main()
{
  int arr1[50],i,j=0,lrg,lrg2nd;

    printf("Enter elements in the array: ");
    for(i=0;i<10;i++)
            {
	      printf("element - %d : ",i);
	      scanf("%d",&arr1[i]);
	    }

   lrg=0;
  for(i=0;i<10;i++)
  {
      if(lrg<arr1[i])
	  {
           lrg=arr1[i];
           j = i;
      }
  }

   lrg2nd=0;
  for(i=0;i<10;i++)
  {
     if(i==j)
        {
          i++;  
		      i--;
        }
      else
        {
          if(lrg2nd<arr1[i])
	     {
               lrg2nd=arr1[i];
             }
        }
  }

  printf("The Second largest element in the array is :  %d \n\n", lrg2nd);
}
