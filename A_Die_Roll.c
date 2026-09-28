#include<stdio.h>
int main()
{
    int y,w;
    scanf("%d%d",&y,&w);
    int temp;
    if(y>w)
    {
        temp=y;
    }
    else
    {
        temp=w;
    }
    if(temp==6)
    {
        printf("1/6");
        return 0;
    }
    if(temp==5)
    {
        printf("1/3");
        return 0;
    }
    if(temp==4)
    {
        printf("1/2");
        return 0;
    }
    if(temp==3)
    {
        printf("2/3");
        return 0;
    }
    if(temp==2)
    {
        printf("5/6");
        return 0;
    }
    if(temp==1)
    {
        printf("1/1");
        return 0;
    }
}
