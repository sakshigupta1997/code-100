/*program to find the sum of natural number using function*/
#include<stdio.h>
#include<conio.h>
int sum(int n);
void main()
{
int n,x;
clrscr();
printf("enter the number");
scanf("%d",&n);
x=sum(n);
printf("sum of the %d natural number is %d",n,x);
getch();
}
int sum(int n)
{
if(n==0)
{
return 0;
}
else
{
return  n+sum(n-1);
}
}