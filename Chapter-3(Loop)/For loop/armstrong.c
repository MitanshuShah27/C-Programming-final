/*Write a C program to check whether a given number is an Armstrong number or not.
Test Data :
Input a number: 153
Expected Output :
153 is an Armstrong number.*/
#include<stdio.h>
#include<math.h>
main()
{
    int i,x,sum=0,y,z;
    printf("\nEnter number");
    scanf("%d",&x);
    z=x;
    for(i=1;i<=3;i++)
    {
        y=x%10;
        sum = sum+(y*y*y);
        x=x/10;
    }
    if(sum == z)
        printf("\nArmstrong number");
    else
        printf("\nNot an Armstrong number");
}
