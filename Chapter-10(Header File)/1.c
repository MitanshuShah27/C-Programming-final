#include <stdio.h>
#include "myheader.h"
main()
{
    int x,y;
    printf("\nEnter value of x");
    scanf("%d",&x);
    printf("\nEnter value of y");
    scanf("%d",&y);
    printf("The value of (%d + %d): %d\n",x,y, add(x, y));
    printf("The value of (%d - %d): %d\n",x,y, sub(x, y));
    printf("The value of (%d * %d): %d\n",x,y, mul(x, y));
    printf("The negative of %d: %d\n",x, negate(x));
}
