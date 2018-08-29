#include<stdio.h>
#include<conio.h>
void main()
{
int n,p,dub=0,rem;
printf("enter a number");
scanf("%d",&n);
p=n;
while(n!=0)
{
rem=n%10;
dub=dub+rem*10;
n=n/10;
}
if(sum==n)
printf("%d is a palindrome number");
else
printf("%d is not a palindrome number");
}
