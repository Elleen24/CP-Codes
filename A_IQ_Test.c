#include<stdio.h>
int main()
{
    int n,even=0,odd=0,result;
    scanf("%d", &n);
    int s[n+2];
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&s[i]);
        if(s[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    if(even>odd)
    {
        for(int i=1;i<=n;i++)
        {
            if(s[i]%2!=0)
            {
                printf("%d",i);
                return 0;
            }
        }
    }
    else
        if(odd>even)
    {
         for(int i=1;i<=n;i++)
        {
            if(s[i]%2==0)
            {
                printf("%d",i);
                return 0;
            }
        }
    }
    else
    {
        printf("0");
    }
}
