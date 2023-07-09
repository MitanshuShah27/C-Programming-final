#include<stdio.h>
main()
{
    int hard,ten;
    float carbon;
    printf("\nEnter hardness");
    scanf("%d",&hard);
    printf("\nEnter carbon content");
    scanf("%f",&carbon);
    printf("\nEnter tensile");
    scanf("%d",&ten);
    if(hard>50 && carbon<0.7 && ten>5600)
        printf("Grade 10");
    else if(hard>50 && carbon<0.7 && ten<=5600)
        printf("Grade 9");
    else if(hard<=50 && carbon<0.7 && ten>5600)
        printf("Grade 8");
    else if(hard>50 && carbon>=0.7 && ten>5600)
        printf("Grade 7");
    else
        printf("Grade 5");
}
