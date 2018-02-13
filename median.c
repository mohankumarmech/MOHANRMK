#include<stdio.h>
#include<conio.h>
void main()
{
int a[20],i,j,n,temp;
printf("enter the size");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter the values");
scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
for(i=0;i<n-1;i++)
{
printf("median value is %d",a[i]);
}
}
