#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int s;
    float sum=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&s);
        float r =(float)s/100;
        sum=sum+r;

    }
    float c=sum/(float)n;
    printf("%f",c*100);
}
