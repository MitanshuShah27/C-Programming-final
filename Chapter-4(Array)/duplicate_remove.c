#include<stdio.h>
main()
{
    int x[10],i,n,m,y,flag=0,count=0;
    printf("\nEnter no.of values to be dilivered");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
        for(m=0;m<i;m++)
        {
            if(x[i]==x[m])
            {
                x[i]=0;
            }
        }
    }
    start:
    for(i=0;i<n;i++)
    {
        if(x[i]==0)
        {
            count++;
            for(y=i;y<n;y++)
            {
                x[y]=x[y+1];
                flag=1;
            }
            break;
        }
        else
            flag=0;
    }
    if(flag==1)
    {
        goto start;
    }
    else
    {
        for(i=0;i<n-count;i++)
        {
            printf("\n%d",x[i]);
        }
    }

}
