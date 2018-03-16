#include<stdio.h>
void main()
{
int n;
scanf("%d",&n);
while((n%10)!=0)
{
n=n+1;
}
printf("%d",n);
}
