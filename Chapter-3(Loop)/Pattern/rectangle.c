#include<stdio.h>
main()
{
    int i,j,length,k,height,m;
    printf("\nEnter length");
    scanf("%d",&length);
    printf("\nEnter height");
    scanf("%d",&height);
    for(i=1;i<=height;i++)
    {
        for(j=1;j<=length;j++)
        {
            if(i==1||i==height)
                printf(" %d",j);
            else if(j==1 || j==length)
                printf(" 1");
            else if(j>1 && j<length)
                printf("  ");
        }
        printf("\n");
    }
}
