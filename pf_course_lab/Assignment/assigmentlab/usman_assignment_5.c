#include<stdio.h>
int main()
{
	int Monthly_Budget;
	char restart;
	printf("Enter a monthly budget : ");
	scanf("%d",&Monthly_Budget);
	int cost;
	do
	{
		printf("\nEnter cost of month : ");
		scanf(" %d",&cost);
		printf("\nDo you want another cost Y/N : ");
		scanf(" %c",&restart);
			}
			while(restart=='Y' || restart=='y');
		
			if(cost<Monthly_Budget){
			printf("Your Expense is less than your budget");
			
		}
		else
		printf("Your Expense is more than your budget ");

	return 0;
}
