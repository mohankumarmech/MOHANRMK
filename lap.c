#include<stdio.h>
#include<conio.h>
void main()
{
int i,n;
char a[40];
clrscr();
printf("enter n");
scanf("%d",&n);
printf("enter a");
scanf("%s",a);
for(i=0;i<n;i++)
{
printf("%s\n",a);
}
getch();
}
