#include<stdio.h>
main()
{
    int i,x,ans=1;
    printf("\nEnter number");
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        ans = ans*i;
    }
    printf("Ans=%d",ans);
}
