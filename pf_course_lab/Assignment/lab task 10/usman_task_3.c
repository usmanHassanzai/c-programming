#include<stdio.h>
int factorial(int n);
int ncr(int,int);

int main()
{
	int n,r;
	printf("Enter value of n. :");
	scanf("%d", &n);
	
	printf("Enter value of r :");
	scanf("%d", &r);
	int nCr=ncr(n,r);
	printf("The combination of value n : %d and value r: %d is %d",n,r,nCr);
	
	return 0;
}
int factorial(int n)
{
	if (n ==1 || n == 0){          
	return 1;
}
	else{
	return n*factorial(n-1);	
}
}
int ncr(int n,int r)
{
	int temp=n-r;
	int result1 = factorial(n);
	int result2=factorial(r);
	int result3=factorial(temp);
	return result1/ (result2*result3);
}