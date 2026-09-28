#include<stdio.h>
int main()
{
   int x, sum=0;
   scanf("%d", &x);
   if(x==1 || x==2 || x==3 || x==4 || x==5)
   {
       sum++;
       printf("%d", sum);
   }
   else
    if(x>5)
   {
       if(x%5==0)
       {
           printf("%d", x/5);
       }
       else
        {
           printf("%d", (x/5)+1);
        }
   }
   else
   {
       printf("%d", sum);
   }
   return 0;
}

