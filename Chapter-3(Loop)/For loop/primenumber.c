#include<stdio.h>
main()
{
    int i,x,y,j,z=1;
    printf("Enter starting value");
    scanf("%d",&x);
    printf("Enter ending value");
    scanf("%d",&y);
    for(i=x;i<=y;i++)
    {
        for(j=2;j<i;j++)
        {
            if(x%i==0)
            {
                z=0;
                break;
            }
        }

    }

}
