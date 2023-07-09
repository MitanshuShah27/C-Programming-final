#include<stdio.h>
main()
{
    int x[3][3],i,j;
    printf("\nEnter matrix");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==1 && j==0 || i==2 && j==0)
                printf("\n");
            scanf("%d",&x[i][j]);
        }
    }
    printf("\nOriginal matrix");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==0 && j==0)
            {
                printf("\n%d",x[i][j]);
            }
            else if(i==0 && j==1)
                printf("\t%d",x[i][j]);
            else if(i==0 && j==2)
                printf("\t%d",x[i][j]);
            else if(i==1 && j==0)
                printf("\n%d",x[i][j]);
            else if(i==1 && j==1)
                printf("\t%d",x[i][j]);
            else if(i==1 && j==2)
                printf("\t%d",x[i][j]);
            else if(i==2 && j==0)
                printf("\n%d",x[i][j]);
            else if(i==2 && j==1)
                printf("\t%d",x[i][j]);
            else if(i==2 && j==2)
                printf("\t%d",x[i][j]);
            else
                break;
        }
    }
    printf("\nTranspose matrix");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==0 && j==0)
            {
                printf("\n%d",x[j][i]);
            }
            else if(i==0 && j==1)
                printf("\t%d",x[j][i]);
            else if(i==0 && j==2)
                printf("\t%d",x[j][i]);
            else if(i==1 && j==0)
                printf("\n%d",x[j][i]);
            else if(i==1 && j==1)
                printf("\t%d",x[j][i]);
            else if(i==1 && j==2)
                printf("\t%d",x[j][i]);
            else if(i==2 && j==0)
                printf("\n%d",x[j][i]);
            else if(i==2 && j==1)
                printf("\t%d",x[j][i]);
            else if(i==2 && j==2)
                printf("\t%d",x[j][i]);
            else
                break;
        }
    }
}
