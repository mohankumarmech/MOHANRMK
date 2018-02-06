#include<stdio.h>
#include<conio.h>
void main()
{
int i,n;
clrscr();
printf("enter n values");
scanf("%d",&n);
for(i=0;i<n;i++)
{
if(i%2==1)
{
printf("%d odd \n",i);
}
}
getch();
}
