#include<stdio.h>
main()
{
    int n,sum=0,rem;
    printf("\nEnter number");
    scanf("%d",&n);
    sum = n%10;
    n=n/10;
    while(n>9)
    {
        n=n/10;
    }
    sum=sum+n;
    printf("\nSum=%d",sum);
}
