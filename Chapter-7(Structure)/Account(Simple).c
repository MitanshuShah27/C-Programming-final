#include<stdio.h>
struct details
{
    int acno;
    char name[20];
    int balance;
};
main()
{
    struct details d1[10];
    int i,n;
    printf("\nEnter number of customer");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter acno");
        scanf("%d",&d1[i].acno);
        printf("\nEnter name");
        scanf("%s",&d1[i].name);
        printf("\nEnter balance");
        scanf("%d",&d1[i].balance);
    }
    for(i=0;i<n;i++)
    {
        if(d1[i].balance <100)
        {
            printf("\n%d\t%s\t%d",d1[i].acno,d1[i].name,d1[i].balance);
        }
    }
}
