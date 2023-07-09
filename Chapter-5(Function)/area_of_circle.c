float area(int);
#include<stdio.h>
main()
{
    int x;
    float a;
    printf("\nEnter radius");
    scanf("%d",&x);
    a=area(x);
    printf("Area = %f",a);
}
float area(int b)
{
    float c;
    c=3.14*b*b;
    return c;
}
