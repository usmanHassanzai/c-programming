#include<stdio.h>
int main(){
	int i,j,n;
	printf("Enter a number");
	scanf("%d",&n);
	for(i=1;i<=n-1;i++){
		for( j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
	for( i=1;i<=n;i++){
		for(j=n;j>=i;j--){
			printf("*");
		}
	printf("\n");
	}
	return 0;
}
