#include<stdio.h>
main()
{
    int x,hours,min;
    printf("\nEnter time in seconds");
    scanf("%d",&x);
    hours = x/3600;
    x = x%3600;
    min = x/60;
    x = x%60;
    printf("\n Hour = %d",hours);
    printf("\n Minutes = %d",min);
    printf("\n Seconds = %d",x);
}
