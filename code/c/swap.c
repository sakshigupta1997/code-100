#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,*p1=&a,*p2=&b;
clrscr();
scanf("%d%d",&a,&b);
*p1=*p1+*p2;
*p2=*p1-*p2;
*p1=*p1-*p2;
printf("%d\n%d",*p1,*p2);
getch();
}
