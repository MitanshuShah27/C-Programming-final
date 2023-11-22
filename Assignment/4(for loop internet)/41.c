#include<stdio.h>
main()
{
    int b,p=0,rem,f=0,dr,ff=0,x=1;
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
    while(f>0)
    {
        dr=f%16;
        ff=ff+dr*x;
        f=f/16;
        x=x*10;
    }
    printf("\nHexa =%d",ff);
}
