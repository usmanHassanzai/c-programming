/*Write a C program to compute (𝑎 + 𝑏) where the value of a and bwill be
3
provided by the user.
The formula of (𝑎 + 𝑏) is given below.
3
(𝑎 + 𝑏) =
3
𝑎
3
+ 𝑏
3
+ 3 𝑎𝑏 (𝑎 + 𝑏)*/
#include<stdio.h>
int main(){
    int a,b;
    printf("enter the value of a and b");
    scanf("%d%d",&a,&b);
    int cube=(a*a*a)+(b*b*b)+3*(a)*(b)*(a+b);
    printf("(a+b)cube=%d",cube);
    return 0;

}