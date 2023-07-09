#include<stdio.h>
main()
{
    int i,x,overtime,ovr;
    for(i=1;i<=3;i++)
    {
        printf("\nEnter no.of hour employee worked %d",i);
        scanf("%d",&x);
        if(x>40)
        {
            overtime = x-40;
            ovr = overtime*12;
            printf("\nEmployee overtime for %dhours and have to be paid %d",x,ovr);
        }
        else
            printf("\nInvalid");
    }
}
