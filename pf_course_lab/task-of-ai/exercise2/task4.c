/*Write a program that takes seconds from the user and displays the time in Hours, minutes and
seconds’ format.
E.g. if the user enters 3700, the output of the program should be
1 Hour 1 minute and 40 seconds.*/
#include<stdio.h>
int main(){
    int seconds;
    printf("how many seconds do you want to convert");
    scanf("%d",&seconds);
    int hour=seconds/3600;
    int minutes=(seconds%3600)/60;
    int second=(seconds%3600)%60;
    printf("%d hour %d minute and %d seconds",hour,minutes,second);
    return 0;
}