#include<stdio.h>
struct dob
{
    int date,month,year;
};
struct details
{
    int rollno;
    char name[20];
    struct dob a;
};
main()
{
    struct details s1 = {1,"Mitanshu",27,01,2005};
    printf("\n%d\t%s\t",s1.rollno,s1.name);
    printf("DOB:- %d-%d-%d",s1.a.date,s1.a.month,s1.a.year);
}
