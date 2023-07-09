#include<stdio.h>
main()
{
    int x[10][10],i,j,n;
    printf("\nEnter number");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            if(j==0||j==i)
                x[i][j] = 1;
            else
                x[i][j] = x[i-1][j-1] + x[i-1][j];
            printf("%d",x[i][j]);
        }
        printf("\n");
    }
}
