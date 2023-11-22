/*Q2) the distance between two cities is input through the keyboard. write a program to convert
      and print this distance in meters, feet, inches and cm*/
#include<stdio.h>
main()
{
    int km,m,f,in,cm;
    printf("Enter distance in km");
    scanf("%d",&km);
    m = km*1000;
    f = km*3280;
    in = km*39370;
    cm = km*100000;
    printf("\n Distance in meter = %d",m);
    printf("\n Distance in feet = %d",f);
    printf("\n Distance in inches = %d",in);
    printf("\n Distance in cm = %d",cm);
}
