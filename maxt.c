#include<stdio.h>
void main()
{
    int c[10],i,j;
    for(i=0;i<10;i++)
    {
        scanf("%d",&c[i]);
    }
    for(i=0;i<10;i++)
    {
        if(c[i]>j)
        {
            j=c[i];
        }
    }
    printf("%d",j);
}
