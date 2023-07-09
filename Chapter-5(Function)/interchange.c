void interchange();
#include<stdio.h>
int x,y;
main()
{
    printf("\nEnter number");
    scanf("%d",&x);
    printf("\nEnter number");
    scanf("%d",&y);
    interchange();
    printf("\nA = %d\nB = %d",x,y);
}
void interchange()
{
    int r;
    r=x;
    x=y;
    y=r;
}
