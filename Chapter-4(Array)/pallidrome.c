#include<stdio.h>
#include<string.h>
main()
{
    char x[10],y[10];
    int i,j=0,len,flag=1;
    printf("\nEnter string");
    gets(x);
    for(len=0;x[len];len++)
    {

    }
    for(i=len-1;i>=0;i--)
    {
        y[j]=x[i];
        j++;
    }
y[j]=NULL;
    for(i=0;i<len;i++)
    {
        if(x[i] == y[i])
            flag = 1;
        else
        {
            flag = 0;
            break;
        }
    }
    if(flag==0)
        printf("\nNot a palindrome");
    else
        printf("\nPalindrome");
}
