int oe(int);
#include<stdio.h>
main()
{
    int x,ans;
    printf("\nEnter number");
    scanf("%d",&x);
    ans=oe(x);
    printf("\n1 for even\n0 for odd");
    printf("\n%d",ans);
}
int oe(int a)
{
    int r;
    if(a%2==0)
        r=1;
    else
        r=0;
    return r;
}
