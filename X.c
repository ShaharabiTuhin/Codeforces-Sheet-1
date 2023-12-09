#include<stdio.h>
int main(){
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(b>=c && b<=d)
        printf("%d %d\n",c,b);
    else if(b=>c && b>=d)
        printf("%d %d\n",c,d);
    else if(c>b)
        printf("%d\n",(b-c));
    else if(a>d)
        printf("%d\n",(a-d));
    else if(c>=a && d>=b)
        printf("%d %d\n",a,b);
    else if(c>=a && b>=d)
        printf("%d %d\n",a,d);
    else if(a==b)
        printf("%d %d\n",a,b);
    else if(b==c)
        printf("%d %d\n",d,c);
    else if(c==d)
        printf("%d %d\n",c,d);
    else if(a==d)
        printf("%d %d\n",a,d);

    return 0;
}
