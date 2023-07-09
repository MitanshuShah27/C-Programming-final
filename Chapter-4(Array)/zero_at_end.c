#include<stdio.h>
main()
{
    int x[10],i,n,y,flag=0,count=0;
    printf("How many number to be entered");
    scanf("%d",&n);
    printf("\nEnter %d number",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    start:
    for(i=0;i<n;i++)
    {
        if(x[i]==0)
        {
            for(y=i;y<n-count;y++)
            {
                x[y]=x[y+1];
                flag=1;
            }
            x[n-1]=0;
            count++;
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
        for(i=0;i<n;i++)
        {
            printf("\n%d",x[i]);
        }
    }
}
