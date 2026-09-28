#include<stdio.h>
#include<string.h>
int main()
{
    int n, sum=0,i;
    scanf("%d", &n);
    getchar();
    char s[n];
    for(i=0;i<n;i++)
    {
        scanf("%c", &s[i]);
        if(i>0)
        {
            if(s[i]!=s[i-1])
            {
             sum+=0;
            }
            else
            {
                ++sum;
            }
        }
    }

    printf("%d", sum);
}
