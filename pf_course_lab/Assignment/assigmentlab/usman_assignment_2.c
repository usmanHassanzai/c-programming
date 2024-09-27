#include<stdio.h>
int monthlysub();
int yearlysub();
int main()
{
int total;
total= (monthlysub()*15)+(yearlysub()*100);
printf("\ntotal revenue generated : %d",total);
monthlysub();
yearlysub();
    return 0;
}

int monthlysub()
{
    printf("\nEnter the number of users availed monthly subscription");
    int a;
    scanf("%d",&a);
    return a;
}

int yearlysub()
{
    printf("\nEnter the number of users availed yearly subscription");
    int b;
    scanf("%d",&b);
    return b;
}
