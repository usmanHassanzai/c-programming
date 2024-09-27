/*Celsius to Fahrenheit and vice versa
Write a program to enter temperature in Celsius and convert it into
Fahrenheit and vice versa.*/
#include<stdio.h>
int main(){
    int celcius,fehrenheit;
    printf("enter temperature");
    scanf("%d",&celcius);
    fehrenheit=(celcius*9/5)+32;
    printf("temperature in degree fehrenheit is %d",fehrenheit);
    return 0;
}