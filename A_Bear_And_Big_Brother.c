#include <stdio.h>

int main()
{
   int a,b,sum=0;
   input:
       scanf("%d%d", &a,&b);
       if(b<a)
       {
           goto input;
       }
   loop:
   a*=3;
   b*=2;
   sum++;
   if(a>b)
   {
       printf("%d",sum);
   }
   else
   goto loop;
   
    return 0;
}