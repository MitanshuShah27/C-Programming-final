#include<stdio.h>
main()
{
    int i,x,count = 0,p=1;
    printf("\nEnter number");
    scanf("%d",&x);
    for(;x>0;x=x/10)
    {
        count = count+1;
        p = p*(x%10);
    }
    printf("\n%d",p);
}
