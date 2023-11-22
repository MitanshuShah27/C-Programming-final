/*Q7) If a any digit number is input through the keyboard, write a program to calculate the sum of it's digit*/
#include<stdio.h>
main()
{
    int x, sum = 0;
    printf("Enter a number");
    scanf("%d",&x);
    sum = sum + x%10;
    x = x/10;
    sum = sum + x%10;
    x = x/10;
    sum = sum + x%10;
    x = x/10;
    sum = sum + x%10;
    x = x/10;
    sum = sum + x%10;
    x = x/10;
    printf("Sum of five digit number is %d",sum);
}
