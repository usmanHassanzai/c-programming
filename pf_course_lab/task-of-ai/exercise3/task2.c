/*Write a program that reads three integers from user and outputs the largest one.
Sample Output:
Enter first integer x: 5
Enter second integer y: 10
Enter second integer z: 8*/
#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter the values of integers");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c){
        printf("first integer a=%d is largest among three",&a);

    }
    if(b>c && b>a){
        printf("second integer b=%d is largest among three",b);
    }
    if(c>a && c>b){
        printf("third integer c=%d is largest among three",c);
    }
    return 0;
}