#include<stdio.h>
main()
{
    int x[10],i,b=0;
    for(i=0;i<10;i++)
    {
        printf("Enter number");
        scanf("%d",&x[i]);
        if(x[i]>b)
        {
            b=x[i];
        }
    }
    printf("Biggest value = %d",b);

}
