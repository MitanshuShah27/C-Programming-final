/*Write a C program to check whether a given number is a 'Perfect' number or not.
Test Data :
Input the number : 56
Expected Output :
The positive divisor : 1 2 4 7 8 14 28
The sum of the divisor is : 64
So, the number is not perfect.*/
#include<stdio.h>
main()
{
    int i,x,sum=0;
    printf("\nEnter number");
    scanf("%d",&x);
    for(i=1;i<x;i++)
    {
        if(x%i==0)
        {
            sum = sum+i;
            printf("\n%d",i);
        }
    }
    if(x==sum)
        printf("\nPerfect number");
    else
        printf("\nNot perfect number");
}
