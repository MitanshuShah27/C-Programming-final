#include<stdio.h>
main()
{
    char x[20];
    printf("\nEnter string");
    scanf("%[^*]",x);
    printf("\n%s",x);
}
