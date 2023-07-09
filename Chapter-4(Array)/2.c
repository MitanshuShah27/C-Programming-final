#include<stdio.h>
main()
{
    int x[5],i,ans=0;
    for(i=0;i<5;i++)
    {
        printf("Enter number");
        scanf("%d",&x[i]);
    }
    for(i=0;i<5;i++)
    {
        if(x[i]%2==0)
        {
            ans = ans+x[i];
        }
    }
    printf("ANS = %d",ans);

}
