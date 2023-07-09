#include<stdio.h>
main()
{
    int i,s,s1;
    float per,total=0;
    for(i=1;i<=4;i++)
    {
        for(s=1;s<=3;s++)
        {
            printf("\nEnter marks of subject %d",s);
            scanf("%d",&s1);
            total = total+s1;
        }
        per = (total/300)*100;
        total = 0;
        printf("\nPercentage of student %d is %f",i,per);
    }
}
