#include<stdio.h>
main()
{
    int x[3][3],y[3][3],i,j,sum[3][3];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==1 && j==0 || i==2 && j==0)
                printf("\n");
            printf("\t");
            scanf("%d",&x[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==1 && j==0 || i==2 && j==0)
                printf("\n");
            printf("\tEnter number");
            scanf("%d",&y[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            sum[i][j] = x[i][j]+y[i][j];
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==1 && j==0 || i==2 && j==0)
                printf("\n");
            printf("\t%d",sum[i][j]);
        }
    }
}
