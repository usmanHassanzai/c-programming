/*Write a program to check a triangle is equilateral, isosceles or scalene. Your program
should ask the user to input x,y,z values
Note:
An equilateral triangle is a triangle in which all three sides are equal.
A scalene triangle is a triangle that has three unequal sides.
An isosceles triangle is a triangle with (at least) two equal sides*/
#include<stdio.h>
int main(){
    int x,y,z;
    printf("enter the values of x , y and z");
    scanf("%d%d%d",&x,&y,&z);
    if(x!=y &&x!=z && x!=z && y!=z){
        printf("it is a scalene triangle");
    } 
    if(x==y && x==z && x==z && y==z){
        printf("it is an equilateral triangle");
    }
    if(x==z  && x!=y && z!=y){
        printf("it is an isosceles triangle");
    }
    if(z==y  && x!=z && y!=x){
        printf("it is an isosceles triangle");
    }
    if(x==y  && x!=z && y!=z){
        printf("it is an isosceles triangle");
    }
    return 0;
}