/*Write a program that takes the length, width and height of a parallelepiped and
finds its volume. The formula to calculate the volume is given below.
Volume = length * width * height*/
#include<stdio.h>
int main(){
    int length,width,height;
    printf("enter the value of length , width ,height");
    scanf("%d%d%d",&length,&width,&height);
    int volume=length*width*height;
    printf("volume of parallelopiped is %d",volume);
    return 0;
}