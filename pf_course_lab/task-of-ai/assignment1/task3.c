/*Check whether a year is leap year or not?
Write a C program that ask user to input year, determines
whether the year is a leap year. A year is a leap year if it is divisible by 4, but is
not divisible by 100 except when divisible by 400. (The year 2000 was a leap
year.)
Hint :(use conditional statements)
For example,
• 1999 is not a leap year
• 2000 is a leap year
• 2004 is a leap year
• 1000 is not a leap year*/
#include<stdio.h>
int main(){
    int year;
    printf("enter a year");
    scanf("%d",&year);
    if(year%4==0){
        printf("leap year");

    }
    else{
        printf("common year");
    }
    return 0;
}