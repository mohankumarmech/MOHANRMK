#include<stdio.h>
#include<coino.h>
void main()
{
int num,rem,count=0;
printf("enter n");
scanf("%d",&n);
while(num>0)
{
num=num/10;
count=count+1;
}
printf("%d",count);
}
