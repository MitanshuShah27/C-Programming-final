#include<stdio.h>
main()
{
    int i,x;
    printf("\nEnter number");
    scanf("%d",&x);
    for(i=1;i<=100;i++)
    {
        if(i%x == 3)
        {
            printf("\n%d",i);
        }

    }
}
