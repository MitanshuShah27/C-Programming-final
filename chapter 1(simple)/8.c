/*Q8) If a three digit number is input through the keyboard, write a program to reverse the number*/
#include<stdio.h>
main()
{
    int x, sum=0,q;
    printf("Enter the number to be reversed");
    scanf("%d",&x);
    sum = x%10*10;
    x = x/10;
    sum = (sum + x%10)*10;
    x = x/10;
    sum = sum+x;
    printf("\nReversed number is %d",sum);
}
