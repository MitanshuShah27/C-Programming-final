
#include<stdio.h>
struct item
{
    int code;
    char name[20];
    int qty;
};
struct item modify(struct item);
main()
{
    struct item p1 = {1,"Tea",10},p2;
    p2 = modify(p1);
    printf("%d\t%s\t%d",p1.code,p1.name,p1.qty);
    printf("%d\t%s\t%d",p2.code,p2.name,p2.qty);
}
struct item modify(struct item m)
{
    m.code++;
    strcpy(m.name,"Coffe");
    m.qty = 100;
    return m;
}
