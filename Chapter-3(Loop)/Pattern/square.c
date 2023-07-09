#include<stdio.h>
main()
{
    int i,j,row,k,c=1,j1;
    char ch = 'A'-1;
    printf("\nEnter row");
    scanf("%d",&row);
    for(i=1;i<=row;i++)
    {
        if(i==1 || i==row)
        {
            for(j=1;j<=row;j++)
            {
                printf("*");
            }
        }
        if(i>1 && i<row)
        {
            printf("*");
            for(k=1;k<=row-2;k++)
            {
                printf(" ");
            }
            printf("*");
        }
            printf("\n");
    }
}
