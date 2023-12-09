#include<stdio.h>
int main(){
    long long int x,y,ans,s,an;
    scanf("%lld%lld",&x,&y);
    ans=(x+y);
    printf("%lld + %lld = %lld\n",x,y,ans);
    an=(x*y);
    printf("%lld * %lld = %lld\n",x,y,an);
    s=(x-y);
    printf("%lld - %lld = %lld\n",x,y,s);

    return 0;
}
