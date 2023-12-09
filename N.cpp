#include<stdio.h>
int main(){
    char i,x;
    scanf("%c",&i);
    if(i>='A'&&i<='Z')
    {
        x=i+32;
    }
    else if(i>='a'&&i<='z')
    {
        x=i-32;
    }
    printf("%c",x);
    return 0;
}
