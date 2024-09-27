#include<stdio.h>
int main(){
    int rows,columns,i,j;
	int sum=0,sum_1=0;
    printf("Enter the dimendion\n");
    scanf("%d",&rows);
int max=rows;
    
    int matrix[rows][rows];
    for(i=0;i<rows;i++){
        for(j=0;j<rows;j++){
            printf("enter the value for index %d%d: ",i,j);
            scanf("%d",&matrix[i][j]);
        }
        printf("\n");
    }
    printf("original matrix\n");
    for(i=0;i<rows;i++){
      max=max-1;
        for(j=0;j<rows;j++){
            
            printf("%d  ",matrix[i][j]);
	if(i==j){
	sum=sum+matrix[j][j]; }
        if(max==j)
          sum_1=sum_1+matrix[i][j];

        }
        printf("\n");
    }
printf("sum of left diagonal %d\n",sum);
printf("sum of right diagonal %d",sum_1);
}