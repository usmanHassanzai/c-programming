/*Write a C program to check whether an alphabet is a vowel or consonant. Your program should
ask the user to input an alphabet
VOWELS ARE (A,E,I,O,U)
*/
#include<stdio.h>
int main(){
    char character;
    printf("enter alphabate");
    scanf("%c",&character);
    if(character=='a' || character=='e' || character=='i' || character=='o' || character=='u' ||
       character=='A' || character=='E' || character=='I' || character=='O' || character=='U'){
        printf("alphabate is a vowel ");
       }
       else{
        printf("alphabate is a consonant");
       }
       return 0;
}