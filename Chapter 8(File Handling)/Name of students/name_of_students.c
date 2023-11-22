#include<stdio.h>
struct nos
{
    char name[20];
};
void enterstu(struct nos *);
void searchstu(struct nos *);
main()
{
    struct nos s1[20];
    struct nos *s;
    s = &s1;
    int c;
    start:
    printf("\nEnter 1 to enter student name");
    printf("\nEnter 2 to search student");
    scanf("%d",&c);
    if(c==1)
        enterstu(s);
    else if(c==2)
        searchstu(s);
    else
        exit(0);
    goto start;
}
void enterstu(struct nos *p)
{
    FILE *fp;
    fp = fopen("nos.txt","a");
    if(fp==NULL)
    {
        printf("\nFile not found");
        exit(1);
    }
    else
    {
        printf("\nEnter name of the student");
        scanf("%s",p->name);
        fprintf(fp,"\n%s",p->name);
    }
    fclose(fp);
}
void searchstu(struct nos *p)
{
    char x;
    printf("\nEnter the starting letter of the name to search");
    x = getch();
    FILE *fp;
    fp = fopen("nos.txt","r");
    if(fp==NULL)
    {
        printf("\nFile not available");
        exit(1);
    }
    else
    {
        for(;fscanf(fp,"%s",p->name)!=EOF;)
        {
            if(p->name[0] == x)
                printf("\n%s",p->name);
        }
    }
    fclose(fp);
}
