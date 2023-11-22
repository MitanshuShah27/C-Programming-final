#include<stdio.h>
main()
{
    int i;
    float S=0;
    for(i=1;i<=5;i++)
    {
        S = S+(1/(float)i);
    }
    printf("\nS = %f",S);
}
