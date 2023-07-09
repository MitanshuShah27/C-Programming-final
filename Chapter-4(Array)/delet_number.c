#include<stdio.h>
main()
{

    int x[10],n,i,num,z,y;
    printf("How many number to be entered");
    scanf("%d",&n);
    printf("\nEnter %d number",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    printf("\nEnter number to be deleted");
    scanf("%d",&y);
    for(z=0;z<n;z++)
    {
        if(x[z]==y)
            break;
    }
    for(i=z;i<n;i++)
    {
        x[i]=x[i+1];
    }
    for(i=0;i<n-1;i++)
    {
        printf("\n%d",x[i]);
    }
}
