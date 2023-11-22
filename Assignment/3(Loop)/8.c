#include<stdio.h>
main()
{
    int i,x;
    printf("\nEnter number");
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        printf("\n%d      %d      %d",i,i*i,i*i*i);
    }
}
