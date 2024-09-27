/*Write a C program that takes quantity in pounds from user and convert it into grams.
1 pound = 453.592 gram*/
#include<stdio.h>
int main(){
    int pound,gram;
    printf("how many pounds do you want to convert");
    scanf("%d",&pound);
    gram=pound*453.592;
    printf("%d pounds=%d gram",pound,gram);
    return 0;
}