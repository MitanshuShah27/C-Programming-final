/*Q5) the length and breath of a rectangle and radius of the circle is input through the keyboard
      Write a program to calculate area and perimeter of the ractangle and area of the circle*/
#include<stdio.h>
main()
{
    int l,b,r, area, peri;
    float areac;
    printf("Enter length of the rectangle");
    scanf("%d",&l);
    printf("Enter breath of the rectangle");
    scanf("%d",&b);
    printf("Enter radius of the circle");
    scanf("%d",&r);
    area = l*b;
    peri = 2*(l+b);
    areac = 3.14*r*r;
    printf("\nArea of rectangle is %d",area);
    printf("\nPerimeter of rectangle is %d",peri);
    printf("\nArea of the circle is %f",areac);
}
