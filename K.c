#include<stdio.h>
int main()
{
    int a,b,c,t,x,y;
    scanf("%d%d%d",&a,&b,&c);
    if(b>c)
    {
        x=b;
        b=c;
        c=x;
    }
    if(a>b)
    {
        t=a;
        a=b;
        b=t;
    }
    if(b>c)
    {
        y=b;
        b=c;
        c=y;
    }
    printf("%d %d%\n",a,c);
    return 0;
}

