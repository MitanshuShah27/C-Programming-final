#include<stdio.h>
main()
{
    int x,i,y=1;
    printf("Enter number");
    scanf("%d",&x);
    for(i=2;i<x;i++)
    {
        if(x%i==0)
        {
            y=0;

        }


    }
    if(y==1)
        printf("prime");
        else
        printf("not prime");

}
