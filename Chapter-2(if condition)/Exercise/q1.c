#include<stdio.h>
main()
{
    int cp,sp,profit;
    printf("\nEnter the cost price of the item");
    scanf("%d",&cp);
    printf("\nEnter the selling price of the item");
    scanf("%d",&sp);
    if(sp>cp)
    {
        profit = sp-cp;
        printf("\nThe seller has made profit of %d",profit);
    }
    else
        printf("\nThe seller has not made any profit");
}
