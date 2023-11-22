/*Q3) If the marks obtained by a student in five different subjects are input through the keyboard, find out
      the percentage marks obtained by the student.*/
#include<stdio.h>
main()
{
    int percent, s1,s2,s3,s4,s5;
    printf("Enter marks of subject 1");
    scanf("%d",&s1);
    printf("Enter marks of subject 2");
    scanf("%d",&s2);
    printf("Enter marks of subject 3");
    scanf("%d",&s3);
    printf("Enter marks of subject 4");
    scanf("%d",&s4);
    printf("Enter marks of subject 5");
    scanf("%d",&s5);
    percent = (s1+s2+s3+s4+s5)*100/500;
    printf("Percentage of the student is %d",percent);
}
