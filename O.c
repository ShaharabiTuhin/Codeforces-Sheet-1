#include<stdio.h>
int main(){
    int A,B,y;
    char x;
    scanf("%d%c%d",&A,&x,&B);
    if(x=='+')
    {
        y=A+B;
    }
    else if(x=='-')
    {
        y=A-B;
    }else if(x=='*')
    {
        y=A*B;
    }else if(x=='/')
    {
        y=A/B;
    }
    printf("%d",y);
    return 0;
}
