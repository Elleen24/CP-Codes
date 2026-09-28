#include <stdio.h>

int main() {
   int index;
   int T,P,V,n,sum=0;
   scanf("%d", &n);
   for(index=0;index<n;index++)
   {
       scanf("%d%d%d", &T,&P,&V);
       if(T==1&&P==1&&V==1)
       {
           sum++;
           goto gg;
       }
       else
       if(T==1&&P==1)
       {
           sum++;
           goto gg;
       }
       if(T==1 && V==1)
       {
           sum++;
           goto gg;
       }
       if(P==1&&V==1)
       {
           sum++;
           goto gg;
       }
       gg:
       index+=0;
       
   }
   printf("%d",sum);

    return 0;
}