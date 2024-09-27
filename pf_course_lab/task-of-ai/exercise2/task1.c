/*Write a Program in C that takes feet from user convert it into Inches.
1 Feet = 12 inches*/
#include<stdio.h>
int main(){
    int feet;
    printf("how many feet do you want to convert");
    scanf("%d",&feet);
    int inches=feet*12;
    printf("%d feet=%d inches",feet,inches);
    return 0;
}