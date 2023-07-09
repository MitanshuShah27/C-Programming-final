#include<stdio.h>
main()
{
    int x[10],i,p=0,n=0,z=0;
    for(i=0;i<10;i++)
    {
        printf("Enter number");
        scanf("%d",&x[i]);
        if(x[i]>0)
        {
            p++;
        }
        else if(x[i]<0)
            n++;
        else
            z++;
    }
    printf("\nPositive = %d",p);
    printf("\nNegative = %d",n);
    printf("\nZero = %d",z);

}
