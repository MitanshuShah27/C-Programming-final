#include<stdio.h>
main()
{
    int x[3][3],i,j,flag = 0;
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
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==0&&j==0||i==0&&j==1||i==0&&j==2||i==1&&j==0||i==2&&j==0)
            {
               if(x[i][j]!=x[j][i])
               {
                   flag=1;
                   break;
               }
            }
        }
    }
    if(flag == 1)
        printf("Not Symmetric");
    else
        printf("Symmetric");
}
