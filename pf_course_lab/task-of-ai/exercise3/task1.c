/*Write a program that reads two integers from user and outputs the largest one using if else.
Sample Output:
Enter first integer x: 5
Enter second integer y: 10
Second integer 10 is greater than first integer 5*/
#include<stdio.h>
int main(){
    int a,b;
    printf("enter the vlaue of integers");
    scanf("%d%d",&a,&b);
    if(a>b){
        printf("firs integer %d is  greater",a);
    }
    else{
        printf("second integer %d is greater",b);

    }
    return 0;
}