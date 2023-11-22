#include<stdio.h>
main()
{
    int x,n=1,r,f=0;
    printf("\nEnter number");
    scanf("%d",&x);
    while(x>0)
    {
        r=x%2;
        f=f+r*n;
        x=x/2;
        n=n*10;
    }
    printf("\nDecimal = %d",f);
}
