#include<stdio.h>
void main()
{
int n,i=0,m=0,sum=0;
printf("enter n");
scanf("%d",&n);
while(n>0)
{
m=n%10;
n=n/10;
sum=sum+m;
}
printf("%d",sum);
}
