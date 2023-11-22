/*Q13) if a five digit number is input through the keyboard, write a program to print a new number by adding one to each digit
       for example:- input is 12391 then output must be 23502*/
#include<stdio.h>
main()
{
    int x,result,y;
    printf("Enter a number");
    scanf("%d",&x);
    result = x + 11111;
    printf("\nResult = %d",result);
}
