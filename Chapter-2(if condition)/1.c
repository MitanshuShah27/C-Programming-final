/*the marks obtained by the student in 5 subject is input through keyboard and then calculate their percentage and assign them a division*/
#include<stdio.h>
main()
{
    float m1,m2,m3,m4,m5,per;
    printf("\nEnter marks of subject 1");
    scanf("%f",&m1);
    printf("\nEnter marks of subject 2");
    scanf("%f",&m2);
    printf("\nEnter marks of subject 3");
    scanf("%f",&m3);
    printf("\nEnter marks of subject 4");
    scanf("%f",&m4);
    printf("\nEnter marks of subject 5");
    scanf("%f",&m5);
    per = ((m1+m2+m3+m4+m5)/500)*100;
    printf("\nPercentage = %f",per);
    if(per>=60)
        printf("\nFirst division");
    else
    {
        if(per<=59&&per>=50)
            printf("\nSecond division");
        else
        {
            if(per<=49&&per>=40)
            {
                printf("\nThird division");
            }
            else
                printf("\nFail");
        }
    }
}
