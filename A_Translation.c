#include<stdio.h>
#include<string.h>
int main()
{
    int i,m;
    char s[101],t[101];
    scanf("%s",s);
    for(i=strlen(s);i>=0;i--)
    {
        scanf("%c", &t[i]);
    }
    m=getchar();
    if(m>='A' && m<='z')
    {
        printf("NO");
        return 0;
    }
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]!=t[i])
        {
            printf("NO");
            return 0;
        }
    }
    printf("YES");

}
