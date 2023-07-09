#include<stdio.h>
struct student
{
    int rollno;
    char name[20];
};
main()
{
    struct student s = {45,"Mitanshu"},s1 = {21,"Ajay"};
    printf("%d\t%s",s.rollno,s.name);
    printf("%d\t%s",s1.rollno,s1.name);
}
