#include<stdio.h>
struct student
{
    int idno;
    char name[20];
    int marks;
};
void input(struct student *,int);
void display(struct student,int);
main()
{
    int n,i;
    struct student s1[10];
    printf("Enter the total students");
    scanf("%d",&n);
    input(&s1,n);
    display(s1,n);
    /*for(i=0;i<n;i++)
    {
        s1[i] = input();
    }
    for(i=0;i<n;i++)
    {
        display(s1[i]);
    }*/
}
void input(struct student *s,int m)
{
    int i;
    for(i=0;i<m;i++)
    {
        printf("\nEnter student id");
        scanf("%d",&s[i].idno);
        printf("\nEnter student name");
        scanf("%s",&s[i].name);
        printf("\nEnter marks");
        scanf("%d",&s[i].marks);
    }
}
void display(struct student s,int m)
{
    int i;
    for(i=0;i<m;i++)
    {
        printf("\n%d\t%s\t%d",s[i].idno,s[i].name,s[i].marks);
    }
}
