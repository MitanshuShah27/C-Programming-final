#include<stdio.h>
main()
{
    int days;
    float total;
    printf("Enter days");
    scanf("%d",&days);
    if(days>=0 && days<=5)
        total = days*0.5;
    else if(days>=6 && days<=10)
        total = 5*0.5+(days-5)*1;
    else if(days>=11 && days<=30)
        total = 5*0.5+5*1+(days-20)*5;
    else
        printf("Your membership is cancelled");
    printf("Total Fine=%f",total);
}
