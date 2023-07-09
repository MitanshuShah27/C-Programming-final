int lcm(int,int);
#include<stdio.h>
main()
{
    int x,y,result;
    printf("\nEnter number");
    scanf("%d",&x);
    printf("\nEnter number");
    scanf("%d",&y);
    result = lcm(x,y);
    printf("\nLCM = %d",result);
}
int lcm(int a,int b)
{
    int i,r;
    for(i=1;;i++)
    {
        if(i%a==0 && i%b==0)
        {
            r=i;
            break;
        }
    }
    return r;
}
