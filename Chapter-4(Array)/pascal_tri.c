#include<stdio.h>
main()
{
    int n,i,z,y,x1[10],x2[10],x3[10],a,b;
    printf("\nEnter number");
    scanf("%d",&n);
    x1[0]=1;
    x2[0]=1;
    x2[1]=1;
    for(i=0;i<n;i++)
    {
        for(z=0;z<i+1;z++)
        {
            printf(" %d",x1[z]);
        }
        for(y=0;y<i+2;y++)
        {
            if(y==0||y==i+1)
            {
                x3[y]=1;
            }
            else
            {
                for(a=1;a<i+1;a++)
                {
                    x3[y]=x2[a]+x2[a+1];
                }
            }
        }
        for(b=0;b<10;b++)
        {
            x1[b]=x2[b];
            x2[b]=x3[b];
        }
        printf("\n");
    }
}
