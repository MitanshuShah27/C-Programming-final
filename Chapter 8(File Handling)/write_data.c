#include<stdio.h>
main()
{
    FILE *fp;
    char x[50] = "My name is mitanshu"
                 "Ok bye";
    fp = fopen("1.txt","w");
    if(fp == NULL)
    {
        printf("\nUnable to open");
    }
    else
    {
        printf("\nFile opened");
        if(strlen(x)>0)
        {
            fputs(x,fp);
            fputs("\n",fp);
        }
        fclose(fp);
        printf("\nFile closed");
    }
}
