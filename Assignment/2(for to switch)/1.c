#include<stdio.h>
main()
{
    int p,q,r,s;
    printf("\nEnter the value of q");
    scanf("%d",&p);
    printf("\nEnter the value of q");
    scanf("%d",&q);
    printf("\nEnter the value of r");
    scanf("%d",&r);
    printf("\nEnter the value of s");
    scanf("%d",&s);
    if(p<0 && q>0 && r>0 && s>0)
    {
        if(q>r && s>p && r+s>p+q)
            printf("\nCorrect values");
        else
            printf("\nWrong values");
    }
    else
        printf("\nWrong values");
}
