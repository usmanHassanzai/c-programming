#include <stdio.h>
int main(){
	int number1,number2,a,b,num;
	printf("enter the two numbers:\n");
	scanf("%d \n %d",&number1,&number2);
	printf("prime no's present between %d and %d are:\n",number1,number2);
	for(a=number1+1;a<number2;a++){
	num=0;
	for(b=2;b<=a/2;++b){
	if(a%b==0){
	num=1;
	break;
	}
	}
	if(num==0){
	printf("%d\n",a);
	}
	}
	return 0;
	}