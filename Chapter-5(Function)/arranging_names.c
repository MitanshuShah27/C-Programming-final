void arrange(char[10][30],int);
#include<stdio.h>
main()
{
    char name[10][30];
    int n,i;
    printf("\nEnter number of name to be entered");
    scanf("%d",&n);
    printf("\nEnter name");
    for(i=0;i<n;i++)
    {
        scanf("%s",name[i]);
    }
    arrange(name,n);
    printf("\nArranged names are");
    for(i=0;i<n;i++)
    {
        printf("\n%s",name[i]);
    }
}
void arrange(char x[10][30],int y)
{
    char temp[30],i,j;
    for(i=0;i<y-1;i++)
    {
        for(j=i+1;j<y;j++)
        {
            if(strcmpi(x[i],x[j])>0)
            {
                strcpy(temp,x[i]);
                strcpy(x[i],x[j]);
                strcpy(x[j],temp);
            }
        }
    }
}
