#include<stdio.h>
int main()
{
	float originalprice=120.0;
	float profitpercent=20.0;
	float profit=(originalprice/100)*profitpercent;
	int selingprice=originalprice+profit;
	printf("selling price is %d",selingprice);

return 0;
}