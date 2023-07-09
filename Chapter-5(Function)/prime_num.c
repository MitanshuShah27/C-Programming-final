int prime(int);
#include<stdio.h>
main()
{
    int x,result;
    printf("\nEnter number");
    scanf("%d",&x);
    result = prime(x);
    printf("\n1 for prime\n0 for not prime");
    printf("\n%d",result);
}
int prime(int a)
{
    int r,i;
    for(i=2;i<a;i++)
    {
        if(a%i==0)
        {
            r=0;
            break;
        }
        else
        {
            r=1;
            break;
        }
    }
    return r;
}
