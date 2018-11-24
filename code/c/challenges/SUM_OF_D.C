#include<stdio.h>
#include<conio.h>
void main()
{
int n,p,rem,sum=0;
clrscr();   
printf("enter a number");    
scanf("%d",&n);
p=n;    
while(n!=0)
{
rem=n%10;
sum=sum+rem;
n=n/10;  
}
printf("sum of digit of number %d is %d",p,sum);
getch();
}  
  
