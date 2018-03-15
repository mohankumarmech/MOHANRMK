#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10],i,j;
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        if(a[i]>j)
        {
            j=a[i];
        }
    }
    printf("%d",j);
}
