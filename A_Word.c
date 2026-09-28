#include<stdio.h>
int main()
{
    int u=0,l=0,i;
    char s[100];
    scanf("%s", s);
    for(i=0;i<strlen(s);i++)
    {
       if(s[i]< 'a')
       {
           u++;
       }
       else
       {
           l++;
       }
    }
    if(u>l)
    {
       for(i=0;i<strlen(s);i++)
       {
          if(s[i]>='a')
          {
              s[i]=s[i]-32;
          }
          else
          {
              s[i]=s[i]+0;
          }
       }
    }
    else
    {
       for(i=0;i<strlen(s);i++)
       {
          if(s[i]<'a')
          {
              s[i]=s[i]+32;
          }
          else
          {
              s[i]=s[i]+0;
          }
       }
    }
    printf("%s",s);
}
