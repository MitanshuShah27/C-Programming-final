#include<stdio.h>
main()
{
    int a,b,c;
    printf("\nEnter the length of side 1");
    scanf("%d",&a);
    printf("\nEnter the length of side 2");
    scanf("%d",&b);
    printf("\nEnter the length of side 3");
    scanf("%d",&c);
    if(a==b&&b==c&&a==c)
        printf("\nThe given triangle is equilateral");
    else if(c*c==(a*a + b*b) || b*b==(a*a+c*c) || a*a==(b*b+c*c))
        printf("\nThe given triangle is rightangled triangle");
    else if(a==b||b==c||a==c)
        printf("\nThe given triangle is isosceles triangle");
    else
        printf("\nThe given triangle is scalene triangle");
}
