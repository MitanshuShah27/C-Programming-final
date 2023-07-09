int sumofdigit(int);
#include<stdio.h>
main()
{
    int x,r;
    printf("\nEnter number");
    scanf("%d",&x);
    r=sumofdigit(x);
    printf("SUM = %d",r);
}
int sumofdigit(int a)
{
    int sum=0,i,rem,temp;
    for(i=0;;i++)
    {
        rem=a%10;
        temp = sum;
        sum=sum+rem;
        if(sum>10)
        {
            sum=temp;
            break;
        }
        a=a/10;
    }
    return sum;
}
