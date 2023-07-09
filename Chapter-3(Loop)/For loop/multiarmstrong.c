#include<stdio.h>
#include<math.h>
main()
{
    int i,x,y,count,z,r,sum=0;
    printf("\nEnter number");
    scanf("%d",&x);
    y=x;
    z=x;
    for(i=0;y>0;y=y/10)
    {
        i++;
    }
    count=i;
    printf("\n%d",count);
    if(count == 3)
    {
        for(i=1;i<=3;i++)
        {
            r=x%10;
            sum = sum+(r*r*r);
            x=x/10;
        }
        if(sum == z)
            printf("\nArmstrong number");
        else
            printf("\nNot an Armstrong number");
    }
    else if(count == 4)
    {
        for(i=1;i<=3;i++)
        {
            r=x%10;
            sum = sum+pow(r,4);
            x=x/10;
        }
        if(sum == z)
            printf("\nArmstrong number");
        else
            printf("\nNot an Armstrong number");
    }
    else if(count == 5)
    {
        for(i=1;i<=3;i++)
        {
            r=x%10;
            sum = sum+(r*r*r*r*r);
            x=x/10;
        }
        if(sum == z)
            printf("\nArmstrong number");
        else
            printf("\nNot an Armstrong number");
    }
    else
        printf("\nEnter valid number");
}
