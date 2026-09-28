#include<stdio.h>
int main()
{
    int n,i;
    char t[]= "I love";
    char f[]= "I hate";
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            printf("%s", t);
        }
        else
        {
            printf("%s", f);
        }
        if(i==n)
        {
            printf(" it ");
        }
        else
        {
            printf(" that ");
        }

    }
}
