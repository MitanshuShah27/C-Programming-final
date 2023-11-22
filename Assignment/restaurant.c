#include<stdio.h>
main()
{
    int mc,inc1,inc2,inc3,qua;
    float dis,temp,total=0,rate;
    printf("\nSr.no\t\tCategory");
    printf("\n1\t\tStarter");
    printf("\n2\t\tMain-course");
    printf("\n3\t\tDesert");
    printf("\nEnter your choice");
    scanf("%d",&mc);
    if(mc==1)
    {
        printf("\n\t\tMenu for starter");
        printf("\nS.no\tProduct name\t   price\tDiscount");
        printf("\n1\tHarabhara kabab\t    300\t\t  10");
        printf("\n2\tgarlic-bread\t    150\t\t  10");
        printf("\n3\tSoup\t\t    200\t\t  8");
        printf("\nEnter your choice");
        scanf("%d",&inc1);
        printf("\nEnter no.of quantity");
        scanf("%d",&qua);
    }
    else if(mc==2)
    {
        printf("\n\t\tMenu for Main-course");
        printf("\nS.no\tProduct name\t   price\tDiscount");
        printf("\n1\tMix-Veg\t\t   500\t\t  5");
        printf("\n2\tKaju-Paner\t   600\t\t  8");
        printf("\n3\tPav-Bhaji\t   500\t\t  12");
        printf("\nEnter your choice");
        scanf("%d",&inc2);
        printf("\nEnter no.of quantity");
        scanf("%d",&qua);
    }
    else if(mc==3)
    {
        printf("\n\t\tMenu for Main-course");
        printf("\nS.no\tProduct name\t   price\tDiscount");
        printf("\n1\tIce-cream\t    50\t\t  8");
        printf("\n2\tSoft-Drink\t    40\t\t  8");
        printf("\n3\tMilk-shake\t    70\t\t  10");
        printf("\nEnter your choice");
        scanf("%d",&inc3);
        printf("\nEnter no.of quantity");
        scanf("%d",&qua);
    }
    else
    {
        printf("\nInvalid choice");
    }
switch(inc1)
{
case 1:
    rate = 300;
    dis = 0.10;
case 2:
    rate = 150;
    dis = 0.10;
case 3:
    rate = 200;
    dis = 0.08;
}
switch(inc2)
{
case 1:
    rate = 500;
    dis = 0.05;
case 2:
    rate = 600;
    dis = 0.08;
case 3:
    rate = 500;
    dis = 0.12;
}
switch(inc3)
{
case 1:
    rate = 50;
    dis = 0.08;
case 2:
    rate = 40;
    dis = 0.08;
case 3:
    rate = 70;
    dis = 0.10;
}
temp = qua*rate;
dis = temp*dis;
total = temp-dis;
printf("\nTotal = %f",total);
}
