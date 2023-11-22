#include<stdio.h>
main()
{
    float r,area,peri;
    printf("\nEnter the radius of the circle");
    scanf("%f",&r);
    area = 3.14*r*r;
    peri = 2*3.14*r;
    printf("\nArea = %f",area);
    printf("\nPerimeter = %f",peri);
}
