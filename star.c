#include<stdio.h>
void main()
{
    int a;
    char b[10];
    scanf("%s",b);
    a=strlen(b);
    if(a%2==0)
    {
        b[a/2]='*';
        b[(a/2)-1]='*';
    }
    else
    {
        b[a/2]='*';
    }
    printf("%s",b);

}
