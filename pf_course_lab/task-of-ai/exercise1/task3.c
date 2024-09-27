/*Write a program that calculates the area of a rectangle and print the result on screen.
The formula to calculate the Area is given below.
A = w * l*/
#include<stdio.h>
int main(){
    int area,width,length;
    printf("enter the width and legth of a rectangle");
    scanf("%d%d",&width,&length);
    area=width*length;
    printf("area of  rectangle is %d",area);
    return 0;
}