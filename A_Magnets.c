#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int m[n],i,sum=0;
    for(i=0;i<n;i++)
    {
        scanf("%d", &m[i]);
        sum++;
        if(i>=1)
        {
            if(m[i]==m[i-1])
            {
                sum--;
            }
        }
    }
    printf("%d", sum);

}
