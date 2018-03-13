#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,sum=0,avg=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
avg=sum/n;
printf("avg %d",avg);
}
