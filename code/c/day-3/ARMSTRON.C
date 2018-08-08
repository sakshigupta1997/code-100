#include<stdio.h>
#include<conio.h>
void main()
{
int n,d,p,r,c=0;
clrscr();
printf("enter the number");
scanf("%d",&n);
d=n;
while(n!=0)
{
n=n%10;
r=n*n*n;
c=c+r;
n=p/10;
p=n;
}
if(c==d)
printf("number is armstrong");
else
printf("number is not armstrong");
getch();
}
