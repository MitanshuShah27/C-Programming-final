#include<stdio.h>
#include<math.h>
main()
{
    float x1,x2,y1,y2,dist;
    printf("\nEnter value of x1");
    scanf("%f",&x1);
    printf("\nEnter value of y1");
    scanf("%f",&y1);
    printf("\nEnter value of x2");
    scanf("%f",&x2);
    printf("\nEnter value of y2");
    scanf("%f",&y2);
    dist = sqrtf(((x2-x1)*(x2-x1)) + ((y2 - y1)*(y2-y1)));
    printf("\n Distance between two points is %f",dist);
}
