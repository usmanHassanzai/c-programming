#include<stdio.h>
int main()
{
	int second=720000;
	int minute=second/60;
        printf("second into minute %d\n",minute);
	int hour=second/3600;
	printf("second into hour %d\n",hour);
	int day=second/86400;
	printf("second into day %d",day);
        return 0;
}