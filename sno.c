#include<stdio.h>
void main()
{
char a[100],i,al=0,nu=0;
gets(a);
for(i=o;a[i]!='\0';i++)
{
if(a[i]>"a"&&a[i]<"z"||a[i]>"A"&&a[i]<"Z")
{
al++;
}
if(a[i]>"0"&&a[i]<"9")
{
nu++;
}
}
if((al&&nu)>0)
{
printf("yes");
}
else
{
printf("no");
}
}
