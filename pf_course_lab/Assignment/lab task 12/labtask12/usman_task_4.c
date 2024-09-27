#include<stdio.h>
int main(){
	int i,n,j;
	char a;
	printf("Enter a character");
	scanf("%c",&a);
	printf("How many rows?");
	scanf("%d",&n);
	
	
	for( i=1;i<=n;i++){
		for(j=n;j>=i;j--){
			printf("%c ",a);
		}
		printf("\n");
	}
	return 0;
}

