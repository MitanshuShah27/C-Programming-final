#include<stdio.h>
main()
{
    char x[30];
    char y[50],*a,*b,temp;
    a = &x;
    b = &y;
    int i,j,l,k;
    printf("Enter string");
    scanf("%s",&x);
    l=strlen(x);
    for(i=0;i<l-1;i++)
    {
        for(j=0;j<l;j++)
        {
            if(i != j)
            {
                temp = *(a+i);
                *(a+i) = *(a+j);
                *(a+j) = temp;
            }
            printf("\n%s",x);
        }
    }
}
