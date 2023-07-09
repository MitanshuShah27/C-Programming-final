#include<stdio.h>
main()
{
    int x[30],y[30],r;
    printf("\nEnter");
    scanf("%s",&x);
    printf("\nEnter");
    scanf("%s",&y);
    r = strcmpi(x,y);
    printf("%d",r);
}
