#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int x,y,*a,*b,sum;
printf("\n enter the two numbers to be added");
scanf("%d%d",&x,&y);
a=&x;
b=&y;
sum=*a+*b;
printf("\n addition is :%d" ,sum);
getch();
}
