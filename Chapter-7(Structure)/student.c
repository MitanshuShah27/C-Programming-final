#include<stdio.h>
struct student
{
    int rollno;
    char name[20];
};
main()
{
    struct student s[5];
    int i;
    for(i=0;i<5;i++)
    {
        printf("Enter roll.no. of Student %d",i+1);
        scanf("%d",&s[i].rollno);
        printf("Enter name of the Student &d",i+1);
        scanf("%s",&s[i].name);
    }
    for(i=0;i<5;i++)
    {
        printf("\n%d\t%s",s[i].rollno,s[i].name);
    }
}
