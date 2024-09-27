#include<stdio.h>
main()
{
	char k;
	printf("Enter a character : ");
	scanf("%c",&k);
	int sum=0;
	if(k>=65 && k<=90){
	printf("you enter character %c in upper case",k);
		sum=k+32;
			printf("\nAfter conversion to lower case : %c",sum);
	}
	else if(k>=97 && k<=122){
		sum=k-32;
		printf("you entered %c in lower case",k);
		printf("\nAfter conversion to Upper case : %c",sum);
	}
	else
	printf("Invalid character");
}
