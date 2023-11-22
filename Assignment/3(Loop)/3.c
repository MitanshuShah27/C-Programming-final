#include<stdio.h>
main()
{
    int i,x;
    printf("\nEnter ending value");
    scanf("%d",&x);
    for(i=0;i<=x;i=i+2)
    {
        printf("\nSquare of %d is %d",i,i*i);
    }
}
