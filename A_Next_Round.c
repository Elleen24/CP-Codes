#include<stdio.h>
int main()
{
    int n,k,sum=0;
    scanf("%d%d", &n,&k);
    int i=n;
    int scr[i];

    for(i=0;i<n;i++)
    {
        scanf("%d",&scr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(scr[i]==0)
        {
            goto zero;
        }
        if(scr[i]>=scr[k-1])
        {
            sum++;
        }
        else
        if(scr[i]<scr[k-1])
        {
            sum+=0;
        }
        zero:
        sum+=0;

    }
    printf("%d",sum);

}
