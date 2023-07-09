#include<stdio.h>
main()
{
    int i,j,row,k,s;
    char ch = 'A'-1;
    printf("\nEnter row");
    scanf("%d",&row);
    for(i=1;i<=row;i++)
    {
        for(k=1;k<=row-i;k++)
        {
            printf(" ");
        }
        if(i%2!=0)
        {
            for(j=1;j<=i;j++)
            {
                printf(" %d",j);
            }
        }
        if(i%2==0)
        {
            for(j=1;j<=i;j++)
            {
                printf(" %c",ch+j);
            }
        }
        printf("\n");
    }
}
