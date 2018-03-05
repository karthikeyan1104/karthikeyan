#include<stdio.h>
#include<conio.h>
{
int main()
{
char s[100];
int 1,i,count=0;
scanf("%s" ,s);
i=strlen(s);
{
for(i=0;i<1;i++)
 if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
count++;
else
continue;
}
if(count>0)
printf("yes");
else
printf("no");
return 0;
}
