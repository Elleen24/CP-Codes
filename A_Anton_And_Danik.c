#include<stdio.h>
int main()
{
    int n,i,a=0,d=0;
    scanf("%d", &n);
    char s[n];
    getchar();
    for(i=0;i<n;i++)
    {
        scanf("%c", &s[i]);
        if(s[i]== 'A')
        {
            ++a;
        }
        else
        {
            ++d;
        }
    }
    if(a>d)
    {
        printf("Anton");
    }
    else
    if(d>a)
    {
        printf("Danik");
    }
    else
    {
        printf("Friendship");
    }
}
