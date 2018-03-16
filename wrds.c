#include<stdio.h>
void main()
{
    int i,b=1;
    char a[50];
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==' ')
        {
            b=b+1;
        }
    }
    printf("%d",b);
}
