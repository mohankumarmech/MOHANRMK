#include<stdio.h>
void main()
{
char str[20];
int l,i,s=0;
printf("Enter the string");
scanf("%s",str);
l=strlen(str);
for(i=0;i<l;i++)
{
  if(str[i]=='@'||str[i]=='*'||str[i]=='.'||str[i]=='#'||str[i]=='&'||str[i]=='^')
  {
    s=s+1;
  }
}
printf("Special character:%d",s);
}
