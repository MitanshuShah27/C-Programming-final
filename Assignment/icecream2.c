#include<stdio.h>
#include<conio.h>
main()
{
    int choice,cont,price,display=0;
    float total,dis,temp,discount;
    char more;
    goto start;
    start:
        printf("\nS.no\tProduct name\tcountity\tprice\tDiscount");
        printf("\n1\tVanilla\t\t 30ml\t\t 30\t 10%");
        printf("\n2\tChocolate\t 30ml\t\t 40\t 5%");
        printf("\n3\tStrawberry\t 30ml\t\t 40\t 7%");
        printf("\n4\tMix fruit\t 30ml\t\t 50\t 9%");
        printf("\n5\tChoco-lava\t 30ml\t\t 70\t 12%");
        printf("\nEnter your choice");
        scanf("%d",&choice);
    if(choice==1)
    {
        printf("\nYou have selected Vanilla flavour");
        printf("\nEnter quantity");
        scanf("%d",&cont);
        price = 30;
        discount = 0.10;
        display = (display*10)+1;
    }
    else if(choice==2)
    {
        printf("\nYou have selected chocolate flavour");
        printf("\nEnter quantity");
        scanf("%d",&cont);
        price = 40;
        discount = 0.05;
        display = (display*10)+2;

    }
    else if(choice==3)
    {
        printf("\nYou have selected Strawberry flavour");
        printf("\nEnter quantity");
        scanf("%d",&cont);
        price = 40;
        discount = 0.07;
        display = (display*10)+3;

    }
    else if(choice==4)
    {
        printf("\nYou have selected Mix fruit flavour");
        printf("\nEnter quantity");
        scanf("%d",&cont);
        price = 50;
        discount = 0.09;
        display = (display*10)+4;

    }
    else if(choice==5)
    {
        printf("\nYou have selected choco-lava flavour");
        printf("\nEnter quantity");
        scanf("%d",&cont);
        price = 70;
        discount = 0.12;
        display = (display*10)+5;

    }
    else
        printf("\nInvalid choice");
    temp = cont*price;
    dis = temp*discount;
    total = total + (temp-dis);
    printf("\nDo you want to add more ice-cream to your list(y/n)");
    fflush(stdin);
    scanf("%c",&more);
    if(more=='Y'||more=='y')
    {
                goto start;
    }
    else
    {
        printf("%d",display);
        display = display%10;
        printf("\nTotal = %f",total);
    }

}
