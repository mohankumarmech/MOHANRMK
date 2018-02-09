#include<stdio.h>
#include<conio.h>
void main()
{
    int i,a[10],temp;
    for(i=1;i<=10;i++)
    {
        printf("enter a value");
        scanf("%d",&a[i]);
    }
    temp=a[0];
    for(i=1;i<=10;i++)
    {
        if(a[0]<a[10])
        {
            temp=a[i];
        }
        ptintf("%d",temp);
    }
}
