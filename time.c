#include<stdio.h>
#include<conio.h>
void main()
{
    int a;
    printf("enter a");
    scanf("%d",&a);
    if((a/60)==1)
    {
        printf("%d hr",a/60);
    }
    else
    {
        printf("%d hrs",a/60);
    }
    if((a%60)==1)
    {
        printf("%d min\n",a%60);
    }
    else
    {
        printf("%d mins \n",a%60);
    }
}

