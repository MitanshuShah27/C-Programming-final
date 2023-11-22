/*Q12) If the total selling price of 15 items and the total profit earned on them is input through the keyboard, write
       a program to find the cost price of one item*/
#include<stdio.h>
main()
{
    int tprice, profit, cost;
    printf("Enter the selling price of 15 items");
    scanf("%d",&tprice);
    printf("\nEnter the profit of this");
    scanf("%d",&profit);
    cost = (tprice - profit)/15;
    printf("\nCost of one item is %d",cost);
}
