#include<stdio.h>
struct details
{
    int acno;
    char name[20];
    int balance;
};
void input(struct details *,int);
void withdrawal(struct details *,int);
main()
{
    struct details d1[10];
    struct details *d;
    d = &d1;
    int i,n;
    printf("\nEnter number of customer");
    scanf("%d",&n);
    input(d,n);
    withdrawal(d,n);
}
void input(struct details *p,int m)
{
    int i;
    for(i=0;i<m;i++)
    {
        printf("\nEnter acno");
        scanf("%d",&p->acno);
        fflush(stdin);
        printf("\nEnter name");
        scanf("%s",p->name);
        printf("\nEnter balance");
        scanf("%d",&p->balance);
        p++;
    }
}
void withdrawal(struct details *p,int m)
{
    int c,tempac,am,i;
    printf("\nEnter 1 for deposit\nEnter 2 for withdrawal");
    scanf("%d",&c);
    if(c==1)
    {
        printf("Enter acno");
        scanf("%d",&tempac);
        printf("Enter amount to deposit");
        scanf("%d",&am);
        for(i=0;i<m;i++)
        {
            if(p->acno == tempac)
            {
                p->balance = p->balance + am;
                printf("\n%d\t%s\t%d",p->acno,p->name,p->balance);
            }
            p++;
        }
    }
    else
    {
        printf("Enter acno");
        scanf("%d",&tempac);
        printf("Enter amount to withdraw");
        scanf("%d",&am);
        for(i=0;i<m;i++)
        {
            if(p->acno == tempac)
            {
                if(am < p->balance)
                    p->balance = p->balance - am;
                else
                    printf("\nInsufficient balance");
                printf("\n%d\t%s\t%d",p->acno,p->name,p->balance);
            }
            p++;
        }
    }
}
