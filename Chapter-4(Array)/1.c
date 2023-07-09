#include<stdio.h>
main()
{
    int x[5],i;
    printf("\nEnter 5 value");
    for(i=0;i<5;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("\t%d",x[i]);
    }
}
