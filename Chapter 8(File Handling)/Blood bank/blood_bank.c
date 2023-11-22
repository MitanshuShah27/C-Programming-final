#include<stdio.h>
struct bloodbank
{
    char name[20];
    char add[40];
    int age;
    int b;
};
char inputd(struct bloodbank *);
char outputd(struct bloodbank *,int);
main()
{
    struct bloodbank b1[10];
    struct bloodbank *b;
    b = &b1;
    char c = 'y';
    int s;
    printf("\nEnter y to enter detail");
    printf("\nEnter n to display detail");
    c = getch();
    start:
    if(c=='y' || c=='Y')
        c = inputd(b);
    else if(c=='n' || c=='N')
    {
        printf("\nEnter blood group number");
        scanf("%d",&s);
        c = outputd(b,s);
    }
    else
        exit(1);
    goto start;
}
char inputd(struct bloodbank *p)
{
    char s;
    FILE *fp;
    fp = fopen("Details.txt","a");
    if(fp == NULL)
    {
        printf("File unable to open");
        exit(0);
    }
    else
    {
        printf("\nEnter the donor name");
        scanf("%s",p->name);
        printf("\nEnter donor address");
        scanf("%s",p->add);
        printf("\nEnter donor age");
        scanf("%d",&p->age);
        printf("\nEnter donor blood group(1,2,3,4)");
        scanf("%d",&p->b);
        fprintf(fp,"\n%s\t%s\t%d\t%d",p->name,p->add,p->age,p->b);
        fclose(fp);
        printf("\nEnter y to enter detail");
        printf("\nEnter n to display detail");
        s = getch();
    }
    return s;
}
char outputd(struct bloodbank *p,int e)
{
    char s;
    FILE *fp;
    fp = fopen("Details.txt","r");
    if(fp == NULL)
    {
        printf("File unable to open");
        exit(0);
    }
    else
    {
        for(;fscanf(fp,"%s\t%s\t%d\t%d",p->name,p->add,&p->age,&p->b)!=EOF;)
        {
            if(p->age>=18 && p->b==e)
                printf("\n%s\t%s\t%d\t%d",p->name,p->add,p->age,p->b);
        }
        printf("\nEnter y to enter detail");
        printf("\nEnter n to display detail");
        s = getch();
    }
    return s;
}
