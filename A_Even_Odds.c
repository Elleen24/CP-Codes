#include<stdio.h>
int main()
{
    long long n,k,m;
    m=2;
    scanf("%lld%lld",&n,&k);
    if(n%2==0)
    {
        if(k>(n/2))
        {
            k= k-(n/2);
            m=m*k;
              printf("%lld",m);
        }
        else
        {
            m=(m*k)-1;
              printf("%lld",m);
        }
    }
    else
    {
        if(k>(n+1)/2)
        {
            k=k-((n+1)/2);
            {
                m=m*k;
                printf("%lld",m);
            }
        }
        else
        {
            m=(m*k)-1;
            printf("%lld",m);
        }
    }

}

