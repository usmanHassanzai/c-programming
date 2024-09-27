//create a program for loop that take any number from user if number is greater than zero than applied a break if number is negative than continue loop,
#include<stdio.h>
int main(){
	int i,x;
	while(i<=5){
		printf("Enter a number");
		scanf("%d",&x);
		if(x>0)
			break;
		i++;
	}
	printf("Applied break");
	i==6;
	printf("ends normally");
	

} 
