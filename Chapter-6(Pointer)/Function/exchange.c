void exchange(int *,int *);
#include<stdio.h>
main()
{
    int a=10,b=20;
    exchange(&a,&b);
    printf("A = %d\nB = %d",a,b);
}
void exchange(int *p,int *q)
{
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}
