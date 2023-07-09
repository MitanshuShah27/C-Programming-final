#include<stdio.h>
main()
{
    int x[5],i,max[5],m=0,a=0,j=4,count=0;
    for(i=0;i<5;i++)
    {
        printf("\nEnter number");
        scanf("%d",&x[i]);
    }
    start:
    for(i=0;i<5;i++)
    {
        if(x[i]>a)
        {
            a = x[i];
            max[j]=a;
            m=i;
        }
    }
    x[m]=0;
    j--;
    count++;
    if(count<5)
        goto start;
    else
    {
        for(i=0;i<5;i++)
        {
           printf("\nAss = %d",x[i]);
        }
    }

}
