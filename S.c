#include<stdio.h>
int main(){
    double n;
    scanf("%lf",&n);
    if(n<0.0||100.0<n)
    {
        printf("Out of Intervals\n");
    }
    else
    {
        if(n>=0.0&&25.0000>=n)
        {
            printf("Interval [0,25]\n");
        }
        else if(n>25.00001&&50.0000000>=n)
        {
            printf("Interval (25,50]\n");
        }
        else if(n>50.0&&75.0>=n)
        {
            printf("Interval (50,75]\n");
        }
        else if(n>75.0&&100.0>=n)
        {
        printf("Interval (75,100]\n");
        }
    }
    return 0;
}

