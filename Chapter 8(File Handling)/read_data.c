#include<stdio.h>
main()
{
    FILE *fp;
    char x[50];
    fp = fopen("read_data.txt","r");
    if(fp == NULL)
    {
        printf("\nUnable to open");
    }
    else
    {
        for(;fgets(x,50,fp)!=NULL;)
        {
            printf("%s",x);
        }
        fclose(fp);
        printf("\nFile closed");
    }
}
