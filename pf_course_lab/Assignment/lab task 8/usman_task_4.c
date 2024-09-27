#include<stdio.h>
int month()
{
	int loan_payment,insurance,gas,oil,tires,maintenance;
	loan_payment=18000;
	insurance=1650;
	gas=9455;
	tires=1300;
	maintenance=11000;
	int month=loan_payment+insurance+gas+tires+maintenance;
	printf("monthly cost is %d\n",month);
	
	return month;
}
int year()
{
	int year=month()*12;
	
}
int main()
{
//	month();
int y=	year();
	printf("yearly cost is %d",y);
}
