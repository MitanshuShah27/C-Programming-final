void arrange(int *,int);
#include<stdio.h>
main()
{
    int *p,n,i,x[30];
    printf("\nEnter number");
    scanf("%d",&n);
    p = &x;
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
    arrange(p,n);
    for(i=0;i<n;i++)
    {
        printf("\n%d",*(p+i));
    }
}
void arrange(int *q,int a)
{
    int i,j,temp;
    for(i=0;i<a;i++)
    {
        for(j=i+1;j<a;j++)
        {
            if(*(q+i) > *(q+j))
            {
                temp = *(q+i);
                *(q+i) = *(q+j);
                *(q+j) = temp;
            }
        }
    }
}
