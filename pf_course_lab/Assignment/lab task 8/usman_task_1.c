#include<stdio.h>
void temp(float c)
{
	float f=((9*c)/5)+32;
	printf("Temperature in celcius is equal to %.2f",f);
}

int main(){
	
	temp(98.9);
	
}
