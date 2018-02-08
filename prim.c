#include <stdio.h>

void main()
{
int a,b=0,i;
printf("enetr a value");
scanf("%d",&a);
for(i=2;i<=a/2;i++)
{
    if(a%i==0)
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
    printf("not prime");
}
}
