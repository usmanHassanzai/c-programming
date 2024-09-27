#include<stdio.h>
int main()
{
	int remaining_choclates,choclates;
	int container=1 , box=1;
	printf("Enter the number of choclates : ");
	scanf("%d",&choclates);
		int a=choclates/22;
		printf("Quantity of Boxes : %d\n",a);
		int b=a/55;
		printf("Quantity of container : %d\n",b);
		remaining_choclates=choclates%22;
		printf("Remaining Chocolates are : %d\n",remaining_choclates);
		
	return 0;
}

