#include<stdio.h>
#include<conio.h>
void main()
{
int n,a=0,b=1,c,counter=0;
clrscr();
printf("Enter the total number in the series:");
scanf("%d",&n);
printf("Fibonacci series of %d number are:\n",n);
printf("%d\t%d\t",a,b);
while(counter!=n-2)
{
c=a+b;
a=b;
b=c;
printf("%d\t",c);
counter++;
}
getch();
}