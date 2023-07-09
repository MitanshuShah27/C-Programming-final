#include<stdio.h>
main()
{
    int i,x,flag = 0,rem;
    printf("\nEnter number");
    scanf("%d",&x);
    for(;x>0;x=x/10)
    {
        rem = x%10;
        if(rem == 0 || rem == 1)
        {
            flag = 1;
        }
        else
        {
            break;
        }
    }
    if(flag == 1)
        printf("\nBinary number");
    else
        printf("\nNot a binary number");
}
