#include<stdio.h>
main()
{
    int i,j,row,k;
    printf("\nEnter row");
    scanf("%d",&row);
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i==j || j==1 || i==row)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
