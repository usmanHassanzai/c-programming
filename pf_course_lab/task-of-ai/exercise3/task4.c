/*Make a Simple Calculator to Add, Subtract, Multiply or Divide Using if else.
Your program ask user to enter the number and the operation you want to perform (+,-,*,/,%)
*/
#include<stdio.h>
#include<math.h>
int main(){
    char operator;
    printf("enter the operator");
    scanf("%c",&operator);
    int a,b;
    printf("enter the two numbers");
    scanf("%d%d",&a,&b);
    if(operator=='+'){
        int c=a+b;
        printf("sum of two numbers are %d ",c);
    }
if(operator=='-'){
        int c=a-b;
        printf("subtract of two numbers are %d ",c);
    }
    if(operator=='*'){
        int c=a*b;
        printf("product of two numbers are %d",c);
    }
    if(operator=='/'){
        int c=a/b;
        printf("division of two numbers are %d",c);
    }
    return 0;
}