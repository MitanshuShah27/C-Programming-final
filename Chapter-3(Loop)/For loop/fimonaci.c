#include<stdio.h>
main()
{
    int x,i,a,y=0,z=1,sum=0;
    printf("\nEnter the number");
    scanf("%d",&x);
    printf("\n0");
    for(i=0;i<x;i++)
    {
        sum = y+z;
        z=y;
        y=sum;
        printf("\n%d",sum);
    }
}
