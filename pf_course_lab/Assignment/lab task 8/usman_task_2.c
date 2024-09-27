#include<stdio.h>
int angle(int a,int b)
{
	int c=180-a-b;
	return c;
}
int main(){
	int a=62;
	int b=88;
	int c=angle(a,b);
	printf("third angle is %d",c);
}
