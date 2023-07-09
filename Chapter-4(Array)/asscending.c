#include<stdio.h>
main()
{
    int x[5],i,m,z;
    for(i=0;i<5;i++)
    {
        printf("\nEnter number");
        scanf("%d",&x[i]);
    }
    for(i=0;i<5;i++)
    {
        for(m=i+1;m<5;m++)
        {
            if(x[i]>x[m])
            {
                z=x[i];
                x[i] = x[m];
                x[m] = z;
            }
        }
    }
    for(i=0;i<5;i++)
    {
        printf("\t%d",x[i]);
    }
}
