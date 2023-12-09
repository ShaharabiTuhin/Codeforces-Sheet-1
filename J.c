#include<stdio.h>
int main()
{
    int a,b,t;
    scanf("%d%d",&a,&b);
    if(a<b)
    {
        t=a;
        a=b;
        b=t;
    }
    if(a%b==0)
    {
        printf("Multiples\n");
    }
    else
    {
         printf("No Multiples\n");
    }
    return 0;
}
