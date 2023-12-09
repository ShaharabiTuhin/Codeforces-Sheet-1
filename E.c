#include<stdio.h>
#define PI 3.141592653
int main(){
    double x,Area;
    scanf("%lf",&x);
    Area=PI*x*x;
    printf("%.9lf",Area);
    return 0;
}
