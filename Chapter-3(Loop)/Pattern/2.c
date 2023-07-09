/*
1
21
321
4321
54321*/
#include<stdio.h>
main()
{
    int i,j,row;
    printf("\nEnter row");
    scanf("%d",&row);
    for(i=1;i<=row;i++)
    {
        for(j=i;j>=1;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}
