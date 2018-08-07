#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,j,min,a[50],temp,m=-1;
printf("enter the total number of element");
scanf("%d",&n);
printf("enter the element");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}

for(i=0;i<n;i++)
{
temp=a[i];
min=a[i];
for(j=i;j<n;j++)
{

if(a[j]<min)
{
min=a[j];
m=j;
}
}
if(m==-1)
{
a[i]=min;
}
else
{
a[i]=min;
a[m]=temp;
}
}
printf("sorted element are\n");
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
getch();
}
