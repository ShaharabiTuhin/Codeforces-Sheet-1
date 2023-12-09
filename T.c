#include<stdio.h>
int main(){
    int a,b,c,t,x,y,p,q,r;
    scanf("%d%d%d",&a,&b,&c);
    p=a;
    q=b;
    r=c;
    if(a>b)
    {
        t=a;
        a=b;
        b=t;
    }
    if(a>c)
    {
           x=a;
           a=c;
           c=x;
    }
    if(b>c)
    {
        y=b;
        b=c;
        c=y;
    }
    printf("%d\n%d\n%d\n\n",a,b,c);
    printf("%d\n%d\n%d\n",p,q,r);

    return 0;
}


