/*Write a program that takes seconds from the user and displays the time in Days, Hours,
minutes and seconds’ format.
if the user enters 3700, the output of the program should be 0 Day 1 Hour 1 minute and 40
seconds.
if the user enters 92000, the output of the program should be
1 Day 1 Hour 33 minute and 20 seconds*/
#include<stdio.h>
int main(){
    int seconds;
    printf("how many seconds do you want to convert");
    scanf("%d",&seconds);
    if(seconds>=86400){
     int day=seconds/86400;
    int hour=(seconds/86400)%3600;
    int minute=(seconds%86400)%3600/60;
    int second=(seconds%86400)%3600%60;
    printf("%d day %d hour %d minute and %d seconds",day,hour,minute,second);   
    }
    else{
    int day=seconds/86400;
    int hour=(seconds/3600);
    int minute=(seconds%3600)/60;
    int second=(seconds%3600)%60;
    printf("%d day %d hour %d minute and %d seconds",day,hour,minute,second);
    }
    //printf("%d day %d hour %d minute and %d seconds",day,hour,minute,second);
    return 0;
}