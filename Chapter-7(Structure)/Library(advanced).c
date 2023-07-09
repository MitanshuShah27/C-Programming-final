#include<stdio.h>
struct library
{
    int acno;
    char title[20];
    char author[20];
    int price;
    int flag;
};
void addb(struct library *,int);
void displayb(struct library *,int);
void dbauthor(struct library *,int);
void dbtitle(struct library *,int);
main()
{
    struct library l1[10];
    struct library *l;
    l=&l1;
    int c,n=0,i,a;
    start:
    printf("\nEnter 1 to add book");
    printf("\nEnter 2 to display book information");
    printf("\nEnter 3 to display book of given author");
    printf("\nEnter 4 to display book by title");
    printf("\nEnter 5 to list count of books in library");
    printf("\nEnter 6 to Exit");
    scanf("%d",&c);
    if(c==1)
    {
        addb(l,n);
        n++;
    }
    else if(c==2)
    {
        displayb(l,n);
    }
    else if(c==3)
    {
        dbauthor(l,n);
    }
    else if(c==4)
    {
        dbtitle(l,n);
    }
    else if(c==5)
    {
        printf("\nTotal books in the library are %d",n);
    }
    else
        exit(0);
    goto start;
}
void addb(struct library *p,int m)
{
    p = p+m;
    printf("\nEnter acno");
    scanf("%d",&p->acno);
    fflush(stdin);
    printf("\nEnter title");
    scanf("%s",p->title);
    printf("\nEnter author name");
    scanf("%s",p->author);
    printf("\nEnter price");
    scanf("%d",&p->price);
    printf("\nEnter flag");
    scanf("%d",&p->flag);
}
void displayb(struct library *p,int m)
{
    int i;
    for(i=0;i<m;i++)
    {
        printf("\n%d\t%s\t%s\t%d\t%d",p->acno,p->title,p->author,p->price,p->flag);
        p++;
    }
}
void dbauthor(struct library *p,int m)
{
    char aut[20];
    int i;
    printf("Enter author name");
    scanf("%s",&aut);
    for(i=0;i<m;i++)
    {
        if(strcmp(aut,p->author)==0)
        {
           printf("\n%d\t%s\t%s\t%d\t%d",p->acno,p->title,p->author,p->price,p->flag);
        }
        p++;
    }
}
void dbtitle(struct library *p,int m)
{
    char titl[20];
    int i;
    printf("Enter title of the book");
    scanf("%s",&titl);
    for(i=0;i<m;i++)
    {
        if(strcmp(titl,p->title)==0)
        {
           printf("\n%d\t%s\t%s\t%d\t%d",p->acno,p->title,p->author,p->price,p->flag);
        }
        p++;
    }
}
