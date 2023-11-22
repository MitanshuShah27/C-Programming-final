#include<stdio.h>
main()
{
    int use,temp,total;
    printf("\nEnter no.of unit consumed");
    scanf("%d",&use);
    if(use>=0 && use<=50)
    {
        total = use*1;
    }
    else if(use>=51 && use<=100)
    {
        total = 50*1+(use-50)*2;
    }
    else if(use>=101 && use<=200)
    {
        total = 50*1+50*2+(use-100)*4;
    }
    else if(use>=201 && use<=400)
    {
        total = 50*1+50*2+100*4+(use-200)*6;
    }
    else if(use>=400)
    {
        total = 50*1+50*2+100*4+200*6+(use-400)*10;
    }
    printf("\nYou total bill is %d",total);
}
