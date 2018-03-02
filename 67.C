#include<stdio.h>
#include<conio.h>
{
void main()
{
int num;
printf("\n enter the number:");
scanf("%d" ,&num);
num+=1;
while(num%10!=0);
{
printf("\n%d" ,num);
getch();
}
