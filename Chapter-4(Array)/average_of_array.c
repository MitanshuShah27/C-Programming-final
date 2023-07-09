#include<stdio.h>
main()
{
    int x[10],i,n,sum=0;
    float y[10];
    printf("\nEnter number of elements");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&x[i]);
    for(i=0;i<n;i++)
    {
       sum=sum+x[i];
       y[i] = (float)sum/(i+1);
    }
    printf("\nArray   Average\n");
    for(i=0;i<n;i++)
    {
        printf("%d         %f\n",x[i],y[i]);
    }
}
