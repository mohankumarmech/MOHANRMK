#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,n,a[i],temp=0,t=0;
    printf("enter n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[1])
            {
                temp=a[i];
                a[i]=a[1];
                a[1]=temp;
            }
        }
    }
    printf("%d",temp);
for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]<a[1])
            {
                t=a[i];
                a[i]=a[1];
                a[1]=t;
            }
        }
    }
    printf("%d",t);
}
