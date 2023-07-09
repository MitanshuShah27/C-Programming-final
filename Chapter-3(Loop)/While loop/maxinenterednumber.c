#include<stdio.h>
main()
{
    int i,x,max=0;
    printf("\nEnter number");
    scanf("%d",&x);
    while(x>0)
    {
        if(x%10>max)
        {
            max = x%10;
        }
        x=x/10;
    }
    printf("\nMax number = %d",max);
}
