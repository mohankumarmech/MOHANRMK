#include<stdio.h>
void main()
{
    int a,b,c,i;
    scanf("%d%d",&a,&b);
    c=a*b;
    for(i=2;i<c;i++)
    {
        if(c==i*i)
        {
            printf("yes");
            break;
        }
        
    }
}
