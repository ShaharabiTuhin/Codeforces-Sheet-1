#include<stdio.h>
int main(){
    char i;
    scanf("%c",&i);
    if(i>='A'&&i<='Z')
    {
        printf("ALPHA\nIS CAPITAL\n");
    }
    else if(i>='0'&&i<='9')
    {
        printf("IS DIGIT\n");
    }
    else if(i>='a'&&i<='z')
    {
        printf("ALPHA\nIS SMALL\n");
    }
    return 0;
}
