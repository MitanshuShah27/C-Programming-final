/*Q9) If a four digit number is input through keyboard. Then write a program to find the sum of first digit and last digit of the
      number.*/
#include<stdio.h>
main()
{
    int sum = 0,x;
    printf("Enter the four digit number");
    scanf("%d",&x);
    sum = x%10;
    sum = sum+ (x/1000);
    printf("\nThe sum is %d",sum);
}
