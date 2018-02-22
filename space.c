#include<stdio.h>
#include<conio.h>
void main()
{
    char s;
    int n,i,count;
    printf("enter lines");
    scanf("%s",&s);
    for(i=0;i<n;i++)
    {
        if(s[i]=='')
        {
            count++;
        }
    }
    printf("the spaces are %d",count);
}
