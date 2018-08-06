/*program to find the largest number */
#include<stdio.h>
#include<conio.h>
void main()
{
int a[1000],n,i,max;
printf("enter the no. of element");
scanf("%d",&n);
printf("enter the element");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
max=a[0];
for(i=1;i<n;i++)
{

if(max<a[i])
{
max=a[i];
}
}
printf("%d",max);
getch();
}