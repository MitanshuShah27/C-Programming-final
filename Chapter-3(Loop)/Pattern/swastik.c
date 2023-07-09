#include<stdio.h>
main()
{
    int i,j,k,row,q,i1,j1,k1;
    printf("Enter value");
    scanf("%d",&row);
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(j==1||i==row)
                printf(" *");
        }
        for(k=1;k<=row-1;k++)
        {
            if(i!=row)
                printf("  ");
        }
        for(q=row;q>=1;q--)
        {
            if(q==row||i==1||i==row)
                printf(" *");
        }
        printf("\n");
    }
    for(i1=1;i1<=row;i1++)
    {
        for(k1=1;k1<=(row+1)-i1;k1++)
        {
            printf("  ");
        }
        for(j1=i1;j1>=1;j1--)
        {
            if(j1==1)
            printf(" *");
            else if(i1==row)
            {
                printf(" *");
            }
            else
                printf("  ");

        }
        for(k1=1;k1<=(row-1)-i1;k1++)
        {
            printf("  ");
        }
        for(j1=i1;j1>=1;j1--)
        {
            if(j1==1)
            printf(" *");
            else if(i1==row && j1==1)
                printf("");
            else
                printf("  ");


        }
        printf("\n");
    }
}
