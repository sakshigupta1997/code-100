#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,result=1;
printf("enter the value of n");
scanf("%d",&n);
if(n==0)
{
printf("factorial is 1");
}
else
{
for(i=n;i>0;i--)
{
result=result*i;

}
printf("the factorial of number%d is%d",n,result);
}
getch();
}





