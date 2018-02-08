#include <stdio.h>

void main()
{
int s=1,i,n;
printf("enter n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    s=s*i;
}
printf("%d",s);
}
