#include<stdio.h>
int main(){
    int rows,columns,i,j;

    printf("how many rows?\n");
    scanf("%d",&rows);
    printf("how many columns?");
    scanf("%d",&columns);
    int matrix[rows][columns];
    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++){
            printf("enter the value for index %d%d: ",i,j);
            scanf("%d",&matrix[i][j]);
        }
        printf("\n");
    }
    printf("original matrix\n");
    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++){
            
            printf("%d  ",matrix[i][j]);
        }
        printf("\n");
    }
printf("\n");
    printf("transpose of matrix\n");
    for(i=0;i<columns;i++){
        for(j=0;j<rows;j++){
            
            printf("%d  ",matrix[j][i]);
        }
        printf("\n");
    }
}