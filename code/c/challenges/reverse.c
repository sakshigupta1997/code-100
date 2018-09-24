#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char arr[50];
printf("enter a string");
gets(arr);
strrev(arr);
printf("reverse of a string is :- %s",arr);
getch();
}
