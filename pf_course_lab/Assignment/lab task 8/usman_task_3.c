#include<stdio.h>
void reverse(int a)
{
	int first=a/100;
	int second=a%100/10;
	int third=a%100%10;
	int result=(third*100)+(second*10)+first;
	printf("reverse of a number is %d",result);
	
}
int main(){
	reverse(256);
}
