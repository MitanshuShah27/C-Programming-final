#include<stdio.h>
main()
{
    int x,y,i,lcm,gcd;
    printf("\nEnter number 1");
    scanf("%d",&x);
    printf("\nEnter number 2");
    scanf("%d",&y);
    for(i=1;;i++)
    {
        if(i%x==0 && i%y==0)
        {
            lcm=i;
            break;
        }
    }
    gcd = (x*y)/lcm;
    printf("\nGCD = %d",gcd);
}
