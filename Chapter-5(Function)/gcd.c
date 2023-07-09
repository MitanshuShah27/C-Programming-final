int gcd(int,int);
#include<stdio.h>
main()
{
    int x,y,result;
    printf("\nEnter number");
    scanf("%d",&x);
    printf("\nEnter number");
    scanf("%d",&y);
    result = gcd(x,y);
    printf("\nGCD = %d",result);
}
int gcd(int a,int b)
{
    int i,r,l;
    for(i=1;;i++)
    {
        if(i%a==0 && i%b==0)
        {
            l=i;
            break;
        }
    }
    r = (a*b)/l;
    return r;
}
