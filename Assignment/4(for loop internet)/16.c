#include<stdio.h>
main()
{
    int i,x,y=0,z;
    printf("\nEnter number");
    scanf("%d",&x);
    for(;x>0;x=x/10)
    {
        z=x%10;
        y = (y*10)+z;
    }
    printf("\n%d",y);
}
