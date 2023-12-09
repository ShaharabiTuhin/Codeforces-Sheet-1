#include<stdio.h>
int main(){
    long long x,y,a,b,v;
    scanf("%lld%lld",&x,&y);
    a=x%10;
    b=y%10;
    v=a+b;
    printf("%lld",v);
    return 0;
}
