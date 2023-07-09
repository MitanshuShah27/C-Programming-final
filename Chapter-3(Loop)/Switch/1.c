 #include<stdio.h>
 main()
 {
    int c,fs;
    printf("\nEnter your class");
    scanf("%d",&c);
    printf("\nEnter no.of failed subjects");
    scanf("%d",&fs);
switch(c)
{
case 1:
    if(fs>3)
        printf("\nNo grace");
    if(fs<=3)
        printf("\n% marks per subject");
    break;
case 2:
    if(fs>2)
        printf("\nNo grace");
    if(fs<=2)
        printf("\n4 marks per subject");
    break;
case 3:
    if(fs>1)
        printf("\nNo grace");
    if(fs == 1)
        printf("\n5 marks per subject");
}
}
