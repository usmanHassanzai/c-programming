#include<stdio.h>
int main()
{
	int burger=500;
	int fries=200;
		char burger1='Y';
		char burger2='N';
		char option1;
		char option2;
		printf("\nDo You Want A Burger? %c/%c : ",burger1,burger2);
		scanf("\n%c",&option);
	if(option1=='Y'||option1=='y'){
		printf("%c",option1);
		printf("\n\nBurger Added");
		printf("\ndo you want a fries and drink as addon? Just for %d Rs %c/%c ",fries,burger1,burger2);
		scanf("  %c",&  option2);
            	if(option2=='Y'||option2=='y'){
            printf("%c",option2);
		    int sum=burger+fries;
		    printf("\n\nThank you");
		    printf("\nYour total Bill is : %d",sum);
		}
		    else if(option2=='N'||option2=='n'){
			printf("%c",option2);
			printf("\n\nYour choice!Thank you");
			printf("\nYour total Bill is : %d",burger);
		}}
		
		    else if(option1=='N'||option1=='n'){
			printf("%c",option1);
		    printf("\n\nNo Problem. See you next time");
		}
        else
		printf("Invalid Input");
		return 0;
}
	
	