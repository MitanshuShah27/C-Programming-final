#include<stdio.h>
main()
{
    int i,x1,x2,dsum,pv,fsum=0,carry;
    printf("\nEnter binary number");
    scanf("%d",&x1);
    printf("\nEnter binary number");
    scanf("%d",&x2);
    while(x1>0 && x2>0)
    {
        dsum = (x1%10)+(x2%10);
        if(dsum == 2)
        {
            carry = 1;
            pv = 0;
        }
        else
            carry=0;
        fsum = fsum*10+pv;
        x1=x1/10;
        x2=x2/10;
    }
    if(carry == 1)
        fsum = fsum*100+carry;
    printf("\n%d",fsum);
}
