#include<stdio.h>
main()
{
    int x[10],i;
    int result[4]={0,0,0,0};
    printf("Enter marks");
    for(i=0;i<10;i++)
    {
        scanf("%d",&x[i]);
        if(x[i]<33)
            result[0]++;
        else if(x[i]<60)
            result[1]++;
        else if(x[i]<70)
            result[2]++;
        else
            result[3]++;
    }
    printf("\nFail = %d, Pass = %d, F_C = %d, D = %d",x[0],x[1],x[2],x[3]);
}
