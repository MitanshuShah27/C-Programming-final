#include<stdio.h>
main()
{
    int i,j,row,k;
    printf("\nEnter row");
    scanf("%d",&row);
    for(i=1;i<=row;i++)
    {
        for(k=1;k<=row-i;k++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf(" *");
        }
        printf("\n");
    }
    for(i=row-1;i>=1;i--)
    {
        for(k=1;k<=row-i;k++)
        {
            printf(" ");
        }
        for(j=i;j>=1;j--)
        {
            printf(" *");
        }
        printf("\n");
    }
}
