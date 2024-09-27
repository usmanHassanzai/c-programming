#include <stdio.h>
int main()
{
    int arr[15];
    int a,n;
    int i, j, k;
       printf("\nPrint all unique elements of an array:\n");	
       printf("input the number of elements: ");
       scanf("%d",&n);
       printf("Input %d elements in the array :\n",n);
       for(i=0;i<n;i++)
            {
	      printf("element %d : ",i);
	      scanf("%d",&arr[i]);
	    }
    printf("\nThe unique elements found in the array are: \n");
    for(i=0; i<n; i++)
    {
        a=0;
        for(j=0,k=n; j<k+1; j++)
        {
        
            if (i!=j)
            {
		       if(arr[i]==arr[j])
              {
                 a++;
               }
             }
        }
       if(a==0)
        {
          printf("%d ",arr[i]);
        }
    }
       printf("\n\n");
}
