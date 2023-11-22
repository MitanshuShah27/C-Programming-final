#include<stdio.h>
main()
{
    int i,p;
    start:
    printf("\nEnter  password");
    scanf("%d",&p);
    if(p==1234)
    {
        printf("\ncorrect password");
    }
    else
    {
        printf("\nincorrect password");
        goto start;
    }
}
