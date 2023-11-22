#include<stdio.h>
main()
{
    int i,x,count = 0,sum=0,y,p;
    printf("\nEnter number");
    scanf("%d",&x);
    y=x;
    for(;x>0;x=x/10)
    {
        count = count+1;
    }
    sum=sum+(y%10);
    if(count>1)
    {
    for(i=count;i!=0;i=i-1)
        {
            if(i==1)

                sum=sum+y%10;
            else
                y = y/10;
        }
    }
    printf("\n%d",sum);
}
