#include<stdio.h>
main()
{
    char x[10],i;
    char *p;
    p=&x;
    scanf("%s",x);
    for(i=0;i<strlen(x);i++)
    {
        printf("\n%c is stored at %d",x[i],(p+i));
    }
}
