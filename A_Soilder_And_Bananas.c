#include<stdio.h>
int main()
{
    int k,n,w,i,sum=0,money;
    scanf("%d%d%d", &k,&n,&w);
    for(i=1;i<=w;i++)
    {
        sum=sum+(i*k);
    }
    if(sum<n)
    {
        printf("0");
    }
    else
    {
    money= sum-n;
    printf("%d",money);
    }

}
