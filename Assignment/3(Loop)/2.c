#include<stdio.h>
main()
{
    int i,count=0,num;
    for(i=1;i<=5;i++)
    {
        printf("\nEnter number");
        scanf("%d",&num);
        if(num>0)
            count=count+1;
    }
    printf("\n%d",count);
}
