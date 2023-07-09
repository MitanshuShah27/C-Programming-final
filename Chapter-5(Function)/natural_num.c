void natural(int);
#include<stdio.h>
main()
{
    int n;
    printf("Enter number");
    scanf("%d",&n);
    natural(n);
}
void natural(int a)
{
    int i;
    for(i=1;i<=a;i++)
    {
        printf("\n%d",i);
    }
}
