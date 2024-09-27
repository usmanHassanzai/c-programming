#include <stdio.h>
int main() {
	int a=3;
	int b=5;
	int x=a; a=b; b=x;
	printf(" a=%d",a);
	printf(" b=%d",b);
return 0;
}