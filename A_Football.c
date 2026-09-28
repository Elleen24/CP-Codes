#include<stdio.h>
#include<string.h>
int main()
{
  char s[100],c=0,i;
  scanf("%s", s) ;
  for(i=0;i<strlen(s);i++)
  {
      if(s[i]==s[i+1])
      {
          c++;
          if(c==6)
          {
              break;
          }
      }
      else
      {
          c=0;
      }
  }
  if(c==6)
  {
      printf("YES");
  }
  else
  {
      printf("NO");
  }
}
