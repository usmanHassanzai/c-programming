#include<stdio.h>

int main()
{
    float cost=1587.25;
    float tax=cost*0.0475;
    float fp=tax+cost;
    float tip=fp*0.1;
    fp=fp+tip;

    printf("Meal Cost: %0.2f Ruppees\n",cost);
    printf("Total Tax: %0.2f Ruppees\n",tax);
    printf("Tip Given: %0.2f Ruppees\n",tip);
    printf("Payable Cost: %0.2f Ruppees\n",fp);

    return 0;
}