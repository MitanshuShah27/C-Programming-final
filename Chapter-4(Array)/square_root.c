#include<stdio.h>
main()
{
    float x,i,temp1,temp2,y,ans,a,z,b;
    printf("\nEnter number");
    scanf("%f",&x);
    for(i=0;i<100;i++)
    {
        temp1 = i*i;
        temp2 = (i+1)*(i+1);
        if(temp1<x && temp2>x || temp1==x)
        {
            y=temp1;
            b=i;
            break;
        }
    }
    z=x-y;
    a=z/(b*2);
    ans = b+a;
    printf("Square root of %f is %f",x,ans);
}
