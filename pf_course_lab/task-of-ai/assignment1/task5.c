/*Write a program that examines three variables—x, y, and z—and
prints the largest odd number among them. If none of them are odd, it should
print a message to that effect.
Note: You have to take three values from user.*/
#include<stdio.h>
int main(){
    int x,y,z;
    printf("enter a number");
    scanf("%d",&x);
    printf("enter a number");
    scanf("%d",&y);
    printf("enter a number");
    scanf("%d",&z);
    if(x>y || x>z){
        if(x%2!=0){
            printf("%d is the greatest odd number",x);
        }
    }
    if(y>x && y>z){
        if(y%2!=0){
            printf("%d is the greatest odd number",y);
        }
    }
    if(z>x && z>y){
        if(z%2!=0){
            printf("%d is the greatest odd number",z);
        }
    }
    if(x==y ||x==z || y==z){
        if(x%2!=0 || y%2!=0 ||z%2!=0){
            printf("%d is the greatest odd number",x);
        }
    }
if(x%2==0 || y%2==0 || z%2==0){
    printf("none of them is odd");
}   
}