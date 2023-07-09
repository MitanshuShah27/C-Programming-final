#include<stdio.h>
main()
{
    int x[10],n,i,pos,z,y;
    printf("How many number to be entered");
    scanf("%d",&n);
    printf("\nEnter %d number",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    printf("\nEnter number to be added");
    scanf("%d",&y);
    printf("\nEnter position");
    scanf("%d",&pos);
    for(i=n;i>pos-1;i--)
    {
        x[i] = x[i-1];
    }
    x[pos-1] = y;
    for(i=0;i<n+1;i++)
    {
        printf("\n%d",x[i]);
    }
}
