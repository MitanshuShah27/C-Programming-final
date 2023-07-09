int sum(int);
#include<stdio.h>
main()
{
    int x,ans;
    printf("\nEnter number");
    scanf("%d",&x);
    ans=sum(x);
    printf("%d",ans);
}
int sum(int a)
{
    int r=0,i;
    for(i=1;i<=a;i++)
    {
        if(i%2!=0)
            r=r+i;
    }
    return r;

}
