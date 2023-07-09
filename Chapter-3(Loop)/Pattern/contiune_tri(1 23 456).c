#include<stdio.h>
main()
{
    int i,j,row,k=0;
    printf("\nEnter row");
    scanf("%d",&row);
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=i;j++)
        {
            k++;
            printf("%d",k);
        }
        printf("\n");
    }
}
