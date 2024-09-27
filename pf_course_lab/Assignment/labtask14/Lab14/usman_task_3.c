#include <stdio.h>
int main() {
   int matrix[3][4];
   int sum,max,year,quarter;
 for(int i=0;i<3;i++){
      printf("year %d:\n",i+1);
     for(int j=0;j<4;j++){
        printf("Enter sales for quarter:%d\n",j+1);
        scanf("%d",&matrix[i][j]);
     }
printf("\n");
 }
 
  max=matrix[0][0];
 for(int i=0;i<3;i++){
     printf("year :%d ",i+1);
     sum=0;
     for(int j=0;j<4;j++){
         
         if(max<matrix[i][j]){
             max=matrix[i][j];
             year=i+1;
             quarter=j+1;
         }
         else if(max==matrix[i][j]){
             max=max;
             year=i+1;
             quarter=j+1;
  }
         sum=sum+matrix[i][j];
  }
printf("\n");
         printf(" revenue: %d\n",sum);
 }
printf("\n");
 printf("max sales: %d in year %d quarter %d",max,year,quarter);

    return 0;
}