#include<stdio.h>
int main()
{
printf("Please enter weight of your package");
float weight;
scanf("%f",&weight);
if (weight>20 && weight>0)
{
    printf("sorry weight cannot be negative,zero or greater than 21");
}
else
{
printf("Please enter the distance");
float distance;
scanf("%f",&distance);
if(distance<=10 || distance>3000){
printf("sorry TCS does not deliver to such distance");
}
if (distance>10 && distance<=3000){
if(weight <=2)
{
float cost1=(distance/500)*1.10;
printf("Thank You\n");
printf("Total Charges:%.3f$\n",cost1);
}
if (weight>2 && weight<=6)
{
float cost2=(distance/500)*2.20;
printf("Thank You\n");
printf("Total Charges:%.3f$\n",cost2);
}
if (weight>6 && weight<=10)
{
float cost3=(distance/500)*3.70;
printf("Thank You\n");
printf("Total Charges:%.3f$\n",cost3);
}
if (weight>10 && weight<=20)
{
float cost4=(distance/500)*4.80;
printf("Thank You\n");
printf("Total Charges:%.3f$\n",cost4);
}
}
}



return 0;
}