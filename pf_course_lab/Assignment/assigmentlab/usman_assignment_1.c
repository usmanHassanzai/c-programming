#include<stdio.h>
//#include<conio.h>
int main()
{
	int n;
	printf("Enter a number of rows : ");
	scanf("%d",&n);
	int a=1;
// pattern 01
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			printf("%d ",a);
			a++;
		}
		printf("\n");
	}
	
	printf("\n");
	
// pattern 02
	for(int i=1;i<=n;i++){
		int b=1,a=0;
		for(int j=1;j<=i;j++){
			int sum=a+b;
			printf("%d ",a);
			a=b;
			b=sum;
		}
		printf("\n");
	}
// pattern 03
	char b='A';
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			printf("%c ",b);	
		}
		printf("\n");
		b++;
	}
	//getch();
	return 0;
}
