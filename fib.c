#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,i,n,c;
printf("enter a,b");
scanf("%d%d",&a,&b);
printf("enter n valu");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("%d",a);
c=a+b;
a=b;
b=c;
}
}
