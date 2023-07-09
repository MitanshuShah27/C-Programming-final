#include<stdio.h>
main()
{
    int i,j,row,k;
    printf("\nEnter row");
    scanf("%d",&row);
    for(i=1;i<=row;i++)
    {
        for(k=1;k<=i-1;k++)
        {
            printf(" ");
        }
        for(j=row;j>=i;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}
