#include <stdio.h>
#include <string.h>

int main()
{

  int n,i,m=0,s=0;
  scanf("%d", &n);
  int a[n], b[n];
  for(i=0;i<n;i++)
  {
  scanf("%d%d", &a[i],&b[i]);
  }
  for(i=0;i<n;i++)
  {
  if(a[i]==0)
  {
  m=m+b[i];
  if(m>s)
  {
      s=m;
  }
  }
  else
  if(s<(m-a[i]+b[i]))
  {
   s=m-a[i]+b[i];
   m=m-a[i]+b[i];
  }
  else
  {
      m=m-a[i]+b[i];
  }
  }

printf("%d",s);
}

