#include<stdio.h>
main()
{
    int *p,i,x[5];
    p = &x;
    printf("Enter elements");
    for(i=0;i<5;i++)
    {
        scanf("%d",p+i);
    }
    for(i=0;i<5;i++)
    {
        printf("\n%d",*(p+i));
    }
}
