#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,a[100],temp,j,k;
clrscr();
printf("enter the no. of element ");
scanf("%d",&n);
printf("enter the elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<n;i++)
{
temp=a[i];
j=i-1;

//if(i==0)
//continue;
while(temp<a[j] && j>=0)
{
a[j+1]=a[j];
j--;
}
a[j+1]=temp;
}
printf("sorted element are");
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
getch();
}
