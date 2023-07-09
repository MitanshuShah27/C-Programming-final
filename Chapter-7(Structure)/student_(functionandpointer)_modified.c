#include<stdio.h>
struct student
{
    int roll;
    char name[20];
    int marks;
};
void enter(struct student *,int);
void display(struct student *,int);
main()
{
    struct student s1[5];
    struct student *s2;
    int n;
    s2 = &s1;
    printf("\nEnter number");
    scanf("%d",&n);
    enter(s2,n);
    display(s2,n);
}
void enter(struct student *p,int m)
{
    int i;
    for(i=0;i<m;i++)
    {
        printf("\nEnter student roll");
        scanf("%d",&p->roll);
        printf("\nEnter student name");
        fflush(stdin);
        scanf("%s",p->name);
        printf("\nEnter student marks");
        scanf("%d",&p->marks);
        p++;
    }
}
void display(struct student *p,int m)
{
    int i;
    for(i=0;i<m;i++)
    {
        printf("\n%d\t%s\t%d",p->roll,p->name,p->marks);
        p++;
    }
}
