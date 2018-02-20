#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c,d,e,f;
    scanf("%d hr %d min",&a,&b);
    scanf("%d hr %d min",&c,&d);
    e=a-c;
    f=b-d;
    printf("%d hr %d min",e,f);
}
