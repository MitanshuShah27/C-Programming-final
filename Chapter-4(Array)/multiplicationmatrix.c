#include<stdio.h>
main()
{
    int x[3][3],y[3][3],i,j,mult[3][3] = {0},m;
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
            if(i==0 && j==0)
                mult[i][j] = (x[i][i]*y[i][i])+(x[i][j+1]*y[j+1][i])+(x[j][i+2]*y[i+2][j]);
            else if(i==0 && j==1)
                mult[i][j] = (x[i][i]*y[i][j])+(x[i][j]*y[j][j])+(x[i][j+1]*y[i+2][j]);
            else if(i==0 && j==2)
                mult[i][j] = (x[i][i]*y[i][j])+(x[i][j-1]*y[i+1][j])+(x[i][j]*y[j][j]);
            else if(i==1 && j==0)
                mult[i][j] = (x[i][j]*y[j][j])+(x[i][i]*y[i][j])+(x[i][j+2]*y[i+1][j]);
            else if(i==1 && j==1)
                mult[i][j] = (x[i][j-1]*y[i-1][j])+(x[i][j]*y[i][j])+(x[i][j+1]*y[i+1][j]);
            else if(i==1 && j==2)
                mult[i][j] = (x[i][j*0]*y[i*0][j])+(x[i][i]*y[i][j])+(x[i][j]*y[i+1][j]);
            else if(i==2 && j==0)
                mult[i][j] = (x[i][j]*y[j][j])+(x[i][j+1]*y[i-1][j])+(x[i][j+2]*y[i][j]);
            else if(i==2 && j==1)
                mult[i][j] = (x[i][j]*y[j-1][j])+(x[i][j]*y[j][j])+(x[i][j+1]*y[i][j]);
            else if(i==2 && j==2)
                mult[i][j] = (x[i][j-2]*y[j-2][j])+(x[i][j-1]*y[i-1][j])+(x[i][j]*y[i][j]);
            else
                break;
        }
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==1 && j==0)
                printf("\n");
            if(i==2 && j==0)
                printf("\n");
            printf("\t%d",mult[i][j]);
        }
    }
    }
