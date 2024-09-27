#include<stdio.h>
int main(){
	int n,i,j;
	int sum=0;
	printf("Enter a number");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		int fact=1;
		for(j=1;j<=i;j++){
			fact=fact*j;
		}
		printf("%d! = %d\n",i,fact);
		sum=sum+fact;
	}
	printf("\nsum:%d",sum);
	return 0;
}
