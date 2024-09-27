/*Celsius to Fahrenheit and vice versa
Write a program to enter temperature in Celsius and convert it into
Fahrenheit and vice versa.*/
#include<stdio.h>
int main(){
    int celcius,fehrenheit;
    printf("enter temperature");
    scanf("%d",&fehrenheit);
    celcius=(fehrenheit-32)*5/9;
    printf("temperature in degree fehrenheit is %d",celcius);
    return 0;
}