#include<stdio.h>
main()
{
    int i,j,row,k,s;
    printf("\nEnter row");
    scanf("%d",&row);
    for(i=0;i<=row-1;i++)
    {
        for(k=1;k<=row-i;k++)
        {
            printf(" ");
        }
        for(j=i;j>=0;j--)
        {
            printf("%d",j);
        }
        for(s=1;s<=i;s++)
        {
            printf("%d",s);
        }
        printf("\n");
    }
}
