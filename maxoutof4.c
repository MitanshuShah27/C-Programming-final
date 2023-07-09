#include<stdio.h>
main()
{
    int a,b,c,d,max;
    printf("\nEnter 1st value");
    scanf("%d",&a);
    printf("\nEnter 2nd value");
    scanf("%d",&b);
    printf("\nEnter 3rd value");
    scanf("%d",&c);
    printf("\nEnter 4th value");
    scanf("%d",&d);
    max = (a>b)?(a>c)?(a>d)?a:d:(c>d)?c:d:(b>c)?(b>d)?b:d:(c>d)?c:d;
    printf("\nMax value is %d",max);
}
