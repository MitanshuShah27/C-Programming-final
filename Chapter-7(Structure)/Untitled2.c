#include<stdio.h>
struct student
{
    int roll;
    char name[30];
    int marks;
};
main()
{
    struct student s1;
    printf("Enter the details");
    scanf("%d",&s1.roll);
}
