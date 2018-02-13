#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i,j,n,temp;
printf("enter size");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter numbers");
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[o]>a[1])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
for(i=0;i<n;i++)
{
printf("the numbers are %d",a[i]);
}
}
