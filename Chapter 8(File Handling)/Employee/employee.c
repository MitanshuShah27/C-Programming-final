#include<stdio.h>
struct employee
{
    int eno;
    char name[20];
    char gender[1];
    int salary;
};
void adddetail(struct employee *);
void removedetail(struct employee *);
main()
{
    struct employee e1[10];
    struct employee *e;
    e=&e1;
    int c;
    start:
    printf("\nEnter 1 to add employee detail");
    printf("\nEnter 2 to delete employee detail");
    scanf("%d",&c);
    if(c==1)
    {
        adddetail(e);
    }
    else if(c==2)
    {
        removedetail(e);
    }
    else
        exit(0);
    goto start;
}
void adddetail(struct employee *p)
{
    FILE *fp;
    fp = fopen("detail.txt","a");
    if(fp == NULL)
    {
        printf("\nFile not found");
        exit(1);
    }
    else
    {
        printf("\nEnter eno of the employee");
        scanf("%d",&p->eno);
        printf("\nEnter name of the employee");
        scanf("%s",p->name);
        printf("\nEnter M for male and F for female");
        scanf("%s",p->gender);
        printf("\nEnter salary of the employee");
        scanf("%d",&p->salary);
        fprintf(fp,"\n%d\t%s\t%s\t%d",p->eno,p->name,p->gender,p->salary);
    }
    fclose(fp);
}
void removedetail(struct employee *p)
{
    int c;
    FILE *fp,*fpp;
    fp = fopen("detail.txt","r");
    fpp = fopen("final_detail.txt","a");
    printf("\nTo remove by id press 1");
    printf("\nTo remove by name press 2");
    scanf("%d",&c);
    int en;
    char nam[20];
    if(c==1)
    {
       printf("\nEnter employee id");
       scanf("%d",&en);
       for(;fscanf(fp,"%d\t%s\t%s\t%d",&p->eno,p->name,p->gender,&p->salary)!=EOF;)
       {
           if(p->eno!=en)
           {
               fprintf(fpp,"\n%d\t%s\t%s\t%d",p->eno,p->name,p->gender,p->salary);
           }
       }
       fclose(fp);
       remove("detail.txt");
       fclose(fpp);
       rename("final_detail.txt","detail.txt");
    }
    else if(c==2)
    {
        printf("\nEnter employee name");
       scanf("%s",&nam);
       for(;fscanf(fp,"%d\t%s\t%s\t%d",&p->eno,p->name,p->gender,&p->salary)!=EOF;)
       {
           if(strcmpi(p->name,nam)!=0)
           {
               fprintf(fpp,"\n%d\t%s\t%s\t%d",p->eno,p->name,p->gender,p->salary);
           }
       }
       fclose(fp);
       remove("detail.txt");
       fclose(fpp);
       rename("final_detail.txt","detail.txt");
    }
    else
    {
        exit(1);
    }
}
