#include <stdio.h>
 int a[10][10];
 int b[10][10];
 int resultant[10][10];
 

int main() {
    
      int arow,column_a,brow,column_b,sum=0;
printf("Enter the row and coloum of matrix a in formate (m n):");
                     scanf("%d %d",&arow,&column_a);

      for(int i=0;i<arow;i++){
      for(int j=0;j<column_a;j++){
printf("Enter the element of matrix a of index:%d%d is ",i,j);
                    scanf("%d",&a[i][j]);
    }}

printf("\n");
printf("\nEnter the row and coloum of matrix b in formate (m n):");
                  scanf("%d %d",&brow,&column_b);

if(column_a!=brow)
printf("Multiplication of given matrixs is not possible \n");
else{
    
    for(int i=0;i<brow;i++){
    for(int j=0;j<column_b;j++){
    printf("Enter the element of matrix b of index:%d%d is ",i,j);
    scanf("%d",&b[i][j]);
    }}

        for(int i=0;i<arow ;i++){
        for(int j=0;j<column_b;j++){
        for(int k=0;k<brow ;k++){
                sum+=a[i][k]*b[k][j];}
                resultant[i][j]=sum;
                sum=0;
        }}
    printf("\n");
    printf("Matrix a is\n");
    
    for(int i=0;i<arow;i++){
      for(int j=0;j<column_a;j++){
printf("%d ",a[i][j]);
    }
        printf("\n");
    }
    
    printf("Matrix b is\n");
   
    for(int i=0;i<brow;i++){
      for(int j=0;j<column_b;j++){
printf("%d ",b[i][j]);
    }
        printf("\n");
    }
   
    printf("Resultant Matrix is\n");
   
    for(int i=0;i<arow;i++){
      for(int j=0;j<column_b;j++){
printf("%d ",resultant[i][j]);
    }
        printf("\n");
    }
}
    return 0;
}