#include<stdio.h>
main()
{
    int x,i;
    printf("Enter number");
    scanf("%d",&x);
    for(i=2;i<x;i++)
    {
        if(x%i==0)
        {
            printf("not Prime");
            break;
        }
        else
            printf("prime");
            break;
    }
}
