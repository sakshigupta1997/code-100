#include<stdio.h>
#include<conio.h>
void main()
{
int i,pass,a[50],n,temp;
printf("enter the total number of element:-\t");
scanf("%d",&n);
printf("enter the unsorted array\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(pass=0;pass<n;pass++)
{
	for(i=0;i<n-1;i++)
	{
		if(a[i+1]<a[i])
		{
		temp=a[i+1];
		a[i+1]=a[i];
		a[i]=temp;
		 }
	}
}
printf("sorted array is:\n" );
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
getch();
}