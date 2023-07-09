#include<stdio.h>
main()
{
    int x[10],y[10],z[20],i,a,b;
    printf("\nEnter no.of values to be entered");
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        printf("\nEnter value %d",i+1);
        scanf("%d",&x[i]);
    }
    printf("\nEnter no.of values to be entered");
    scanf("%d",&b);
    for(i=0;i<b;i++)
    {
        printf("\nEnter value %d",i+1);
        scanf("%d",&y[i]);
    }
    for(i=0;i<a;i++)
    {
        z[i] = x[i];
    }
    for(i=a;i<a+b;i++)
    {
        z[i] = y[i-a];
    }
    for(i=0;i<a+b;i++)
    {
        printf("\n%d",z[i]);
    }
}
