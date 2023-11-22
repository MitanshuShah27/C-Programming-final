#include<stdio.h>
#include<conio.h>
main()
{
    int choice,cont,price;
    float total,dis,temp,discount;
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
        printf("Enter quantity");
        scanf("%d",&cont);
        price = 30;
        discount = 0.10;
        printf("\n\t\t\t-:BILL:-");
        printf("\nS.no\tProduct name\tcountity\tprice\tDiscount\tQuantity");
        printf("\n1\tVanilla\t\t 30ml\t\t 30\t 10%\t\t %d",cont);


    }
    else if(choice==2)
    {
        printf("\nYou have selected chocolate flavour");
        printf("Enter quantity");
        scanf("%d",&cont);
        price = 40;
        discount = 0.05;
        printf("\n\t\t\t-:BILL:-");
        printf("\nS.no\tProduct name\tcountity\tprice\tDiscount\tQuantity");
        printf("\n2\tChocolate\t 30ml\t\t 40\t 5%\t\t %d",cont);



    }
    else if(choice==3)
    {
        printf("\nYou have selected Strawberry flavour");
        printf("Enter quantity");
        scanf("%d",&cont);
        price = 40;
        discount = 0.07;
        printf("\n\t\t\t-:BILL:-");
        printf("\nS.no\tProduct name\tcountity\tprice\tDiscount\tQuantity");
        printf("\n3\tStrawberry\t 30ml\t\t 40\t 7%\t\t %d",cont);


    }
    else if(choice==4)
    {
        printf("\nYou have selected Mix fruit flavour");
        printf("Enter quantity");
        scanf("%d",&cont);
        price = 50;
        discount = 0.09;
        printf("\n\t\t\t-:BILL:-");
        printf("\nS.no\tProduct name\tcountity\tprice\tDiscount\tQuantity");
        printf("\n4\tMix fruit\t 30ml\t\t 50\t 9%\t\t %d",cont);

    }
    else if(choice==5)
    {
        printf("\nYou have selected choco-lava flavour");
        printf("Enter quantity");
        scanf("%d",&cont);

        price = 70;
        discount = 0.12;
        printf("\n\t\t\t-:BILL:-");
        printf("\nS.no\tProduct name\tcountity\tprice\tDiscount\tQuantity");
        printf("\n5\tChoco-lava\t 30ml\t\t 70\t 12%\t\t %d",cont);

    }
    else
        printf("\nInvalid choice");
    temp = cont*price;
    dis = temp*discount;
    total = total + (temp-dis);
    printf("\nTotal = %f",total);

}
