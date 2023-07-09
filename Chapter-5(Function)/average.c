float average(int);
#include<stdio.h>
main()
{
    int x;
    float ans;
    printf("\nEnter number");
    scanf("%d",&x);
    ans=average(x);
    printf("\n%f",ans);
}
float average(int a)
{
    int r=0,i;
    float av;
    for(i=1;i<=a;i++)
    {
        r = r+i;
    }
    printf("\nr=%d",r);
    av = r/(float)a;
    return av;

}
