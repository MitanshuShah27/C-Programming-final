#include<stdio.h>
main()
{
    int n,rem,sum=0;
    printf("Enter number");
    scanf("%d",&n);
    while(n>0)
    {
        rem = n%10;
        if(rem%2!=0)
            sum=sum+rem;
        n=n/10;
    }
    printf("Ans=%d",sum);
}
