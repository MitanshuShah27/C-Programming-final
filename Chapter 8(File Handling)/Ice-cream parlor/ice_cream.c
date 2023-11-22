#include<stdio.h>
#include<string.h>
struct icecream
{
    int pcode;
    char name[20];
    int qty;
    int price;
    int dis;
};
void editmenu(struct icecream *);
void displaymenu(struct icecream *);
void placeorder(struct icecream *);
void cancelorder(struct icecream *);
main()
{
    struct icecream i1[10];
    struct icecream *i;
    i = &i1;
    int c;
    start:
    printf("\nPress 1 to display menu");
    printf("\nPress 2 to place order");
    printf("\nPress 3 to cancel a order");
    printf("\nPress 4 for the final billing");
    printf("\nPress 5 to add new item in menu");
    printf("\nPress any other key to exit");
    scanf("%d",&c);
    if(c==1)
    {
        displaymenu(i);
    }
    else if(c==2)
    {
        placeorder(i);
    }
    else if(c==3)
    {
        cancelorder(i);
    }
    else if(c==4)
    {

    }
    else if(c==5)
    {
        editmenu(i);
    }
    else
        exit(0);
    goto start;
}
void editmenu(struct icecream *p)
{
    FILE *fp;
    fp = fopen("menu.txt","a");
    if(fp==NULL)
        exit(1);
    else
    {
        printf("\nEnter product code");
        scanf("%d",&p->pcode);
        printf("\nEnter product name");
        scanf("%s",p->name);
        printf("\nEnter product quantity in ml");
        scanf("%d",&p->qty);
        printf("\nEnter price of the product");
        scanf("%d",&p->price);
        printf("\nEnter discount of this product");
        scanf("%d",&p->dis);
        fprintf(fp,"\n%-20s\t%-2d\t%-2d\t%-2d\t%-2d",p->name,p->pcode,p->qty,p->price,p->dis);
    }
    fclose(fp);
}
void displaymenu(struct icecream *p)
{
    FILE *fp;
    fp = fopen("menu.txt","r");
    if(fp==NULL)
        exit(1);
    else
    {
        printf("\n%28s%-28s","ME","NU");
        printf("\n%-20s\t%-2s\t%-2s\t%-2s\t%-2s","Item_name","Code","Qty","Price","Discount");
        for(;fscanf(fp,"%s\t%d\t%d\t%d\t%d",p->name,&p->pcode,&p->qty,&p->price,&p->dis)!=EOF;)
        {
            printf("\n%-20s\t%-2d\t%-2d\t%-2d\t%-2d",p->name,p->pcode,p->qty,p->price,p->dis);
        }
    }
    fclose(fp);
}
void placeorder(struct icecream *p)
{
    char t[2];
    int c,q,i;
    printf("\nEnter table number");
    scanf("%s",t);
    FILE *fp,*fpp;
    fp = fopen(t,"a");
    fpp = fopen("menu.txt","r");
    printf("\nEnter product code");
    scanf("%d",&c);
    printf("\nEnter qty");
    scanf("%d",&q);
    for(;fscanf(fpp,"%s\t%d\t%d\t%d\t%d",p->name,&p->pcode,&p->qty,&p->price,&p->dis)!=EOF;)
    {
        if(p->pcode == c)
        {
            for(i=0;i<q;i++)
                fprintf(fp,"\n%-20s\t%-2d\t%-2d\t%-2d\t%-2d",p->name,p->pcode,p->qty,p->price,p->dis);
        }
    }
    fclose(fp);
    fclose(fpp);
}
void cancelorder(struct icecream *p)
{
    char t[]="1";
    int c;
    printf("\nEnter table number");
    scanf("%s",t);
    FILE *fp;
    fp = fopen(t,"r");
    printf("\nEnter product code");
    scanf("%d",&c);
    for(;fscanf(fp,"%s\t%d\t%d\t%d\t%d",p->name,&p->pcode,&p->qty,&p->price,&p->dis)!=EOF;)
    {
        if(p->pcode==c)
        {
           printf("\nok");
        }
    }
    fclose(fp);
}
