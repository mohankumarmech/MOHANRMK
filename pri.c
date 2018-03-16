#include<stdio.h>
void main()
{
int i,a,b=0;
scanf("%d",&a);
for(i=2;i<=a/2;i++)
{
if(a%2==0)
{
b=1;
break;
}
}
if(b==0)
{
printf("prime");
}
else
{
printf("not primr");
}
}
