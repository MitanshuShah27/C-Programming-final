#include<stdio.h>
main()
{
int m1[3][3],m2[3][3],m[3][3],i,j,x,y,a,b,sum,count;
a=0;

printf("\n please enter the first matrix \n\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf(" %d",&m1[i][j]);
}
printf("\n");
}
printf("\n please enter the second matrix \n\n");
for(x=0;x<3;x++)
{
for(y=0;y<3;y++)
{
scanf(" %d",&m2[x][y]);
}
printf("\n");
}
printf("\n the multiplication of two matrix is \n");
for(i=0;i<3;i++)
{
count=0,b=0;
for(y=0;y<3;y++)
{
sum=0;
for(j=0,x=0;j<3&&x<3;j++,x++)
{
sum=sum+(m1[i][j]*m2[x][y]);
count=count+1;
}
m[a][b]=sum;
b=b+1;
if(count%9==0)
{
a=a+1;
}
}
}
for(a=0;a<3;a++)
{
printf("\n");
for(b=0;b<3;b++)
{
printf(" %d ",m[a][b]);
}
printf("\n");
}
getch();
}
