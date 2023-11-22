#include<stdio.h>
#include<math.h>
main()
{
    int b,p=0,rem,f=0;
    printf("\nEnter binary number");
    scanf("%d",&b);
    while(b>0)
    {
        rem = b%10;
        f=f+rem*pow(2,p);
        b=b/10;
        p++;
    }
    printf("\nDecimal = %d",f);
}
