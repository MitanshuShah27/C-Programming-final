#include<stdio.h>
main()
{
    int i,x;
    printf("\nEnter number");
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        if(x%i==0)
            printf("\n%d",i);
    }
}
