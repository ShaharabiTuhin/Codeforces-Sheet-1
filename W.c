#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c,sum,sup,pro;
    char s,t;
    scanf("%d %c %d %c %d",&a,&s,&b,&t,&c);
    if(s=='+')
    {
        sum=(a+b);
        if(sum==c)
            printf("Yes\n");
        else
            printf("%d\n",sum);

    }if(s=='-')
    {
        sup=(a-b);
        if(sup==c)
        {
            printf("Yes\n");
        }else{
            printf("%d\n",sup);
        }
    }if(s=='*')
    {
        pro=(a*b);
        if(pro==c)
        {
            printf("Yes\n");
        }else{
            printf("%d\n",pro);
        }
    }
    return 0;
}

