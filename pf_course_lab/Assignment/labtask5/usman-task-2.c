#include<stdio.h>
int main(){
	int a=123;
	int first=a/100;
	int second=a%100/10;
	int third=a%100%10;
	int result=(third*100)+(second*10)+first;
	printf("reverse of 123 is: %d",result);


return 0;
}