#include<stdio.h>
int main(){
    int n,x,y,z,m,d;
    scanf("%d",&n);
    y=n/365;
    x=n%365;
    m=x/30;
    d=x%30;
    printf("%d years\n%d months\n%d days\n",y,m,d);
    return 0;
}
