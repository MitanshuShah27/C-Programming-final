#include<stdio.h>
main()
{
    int x[5], y[5], ans[5],i;
    for(i=0;i<5;i++)
    {
        printf("Enter value for 1st array");
        scanf("%d",&x[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("Enter value for 2nd array");
        scanf("%d",&y[i]);
    }
    for(i=0;i<5;i++)
    {
        ans[i] = x[i]+y[i];
    }
    for(i=0;i<5;i++)
    {
        printf("\nAns = %d",ans[i]);
    }
}
