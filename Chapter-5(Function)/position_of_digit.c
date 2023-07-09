int finddigit(int,int);
#include<stdio.h>
main()
{
    int x,n,r;
    printf("\nEnter a number");
    scanf("%d",&x);
    printf("\nEnter digit to be searched");
    scanf("%d",&n);
    r=finddigit(x,n);
    printf("\n%d digit occurs in %d at position %d",n,x,r);
}
int finddigit(int a,int b)
{
    int re,i,rem;
    for(i=1;;i++)
    {
        rem=a%10;
        if(rem==b)
        {
            re=i;
            break;
        }
        a=a/10;
    }
    return re;
}
