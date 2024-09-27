#include <stdio.h>
int main()
 {
	int a, b; 
	printf("This program will print natural no's from 1 to 50\n");
	printf("How many elements are in a row?");
	scanf("%d", &a);

	for(b= 1; b<= 50; b++){
	printf("%d\t",b);
	if (b % a == 0)
	{
	printf ("\n");
	} 
	}
	
	return 0;
}