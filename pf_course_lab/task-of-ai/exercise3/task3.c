/*Write a program that reads the score of a student in a subject and displays his grades according
to the following criteria:
Note: Use if-else if statements for this program*/
#include<stdio.h>
int main(){
    int score;
    printf("enter the score");
    scanf("%d",&score);
    if(score>=90 && score<=100){
        printf("congratulation you score A+ grade\n");
    }
    if(score>=80 && score<90){
        printf("congratulation you score A grade\n");
    }
    if(score>=70 && score<80){
        printf("good efforts you score B grade\n");
    }
    if(score>=60 && score<70){
        printf("better luck you score c grade \n");

    }
    if(score>=50 && score<60){
        printf("work hard you score D grade\n");
    }
    if(score<50){
        printf("sorry you are fail\n");
    }
    return 0;
}