#include<stdio.h>
main()
{
    int x[5],temp,i,max=0,min=x[0],mi,mii;
    for(i=0;i<5;i++)
    {
        printf("\nEnter value %d",i+1);
        scanf("%d",&x[i]);
    }
    for(i=0;i<5;i++)
    {
        if(x[i]>max)
        {
            max = x[i];
            mi=i;
        }
    }
    for(i=0;i<5;i++)
    {
        if(min>=x[i])
        {
            min=x[i];
            mii=i;
        }
    }
    temp = x[mi];
    x[mi]=x[mii];
    x[mii]=temp;
    for(i=0;i<5;i++)
    {
        printf("\n%d",x[i]);
    }
}
