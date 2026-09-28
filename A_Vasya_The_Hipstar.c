#include<stdio.h>
int main()
{
    int x,y,r,s,h;
    scanf("%d%d",&x,&y);
          if(x==y)
          {
              printf("%d 0",x);
          }
          else
         if(x>y)
         {
            printf("%d ",y);
            printf("%d ",(x-y)/2);
         }
         else
         if(y>x)
         {
             printf("%d ",x);
                printf("%d ", (y-x)/2);
         }


}



