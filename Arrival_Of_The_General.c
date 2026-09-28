#include<stdio.h>
int main()
{
    int n,max=0,min=101,i,j,s;
    scanf("%d", &n);
    int a[n+1];
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
        if(a[i]>max)
        {
            max= a[i];
            j=i;
        }
        else
        if(a[i]==max)
        {
            max=a[i];
        }
        if(a[i]<min || a[i]==min)
        {
            min=a[i];
            s=i;
        }
    }
    if(j>s)
    {
        printf("%d",j+ n-1-s-1);
    }
    else
    printf("%d",j+ n-1-s);

}
