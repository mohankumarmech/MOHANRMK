#include <stdio.h>

void main()
{
int n,i,d;
printf("enter n,d value");
scanf("%d%d",&n,&d);
printf("the numbers divisible by %d are",d);
for(i=1;i<=n;i++)
{
  if(i%d==0)
  {
      printf("%d",i);
  }
}
}
