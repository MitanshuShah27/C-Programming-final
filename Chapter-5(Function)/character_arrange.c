void charrange(char[]);
#include<stdio.h>
#include<string.h>
main()
{
    char ch[30],l,i;
    printf("\nEnter name");
    //gets(ch);
    scanf("%[^\n]",ch);
    charrange(ch);
    printf("\n%c",ch);
}
void charrange(char c[])
{
    int i,l;
    char temp;
    l = strlen(c);

    for(i=0;i<strlen(c)-1;i++)
    {
        if(c[i]>c[i+1])
        {
            temp=c[i];
            c[i]=c[i+1];
            c[i+1]=temp;
        }
    }
    for(i=0;i<l;i++)
    {
        printf("\n%c",c[i]);
    }
}
