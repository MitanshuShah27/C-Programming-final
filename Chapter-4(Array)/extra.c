#include<stdio.h>
void main()
{
char a[20],rev[20];
int i,count=0,j=0;
printf("Enter string = ");
gets(a);
for(i=0;a[i]!=0;i++)
{
count++;
}
printf("\nThe length of given string is = %d\n",count);
for(i=count-1;i>=0;i--)
{

rev[j]=a[i];
j++;

}
rev[j]=NULL;

printf("\nOriginal string is %s\tReverse string is %s",a,rev);
}
