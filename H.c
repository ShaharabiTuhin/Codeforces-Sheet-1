#include<stdio.h>
#include<math.h>
int main(){
    double a,b,x;
    scanf("%lf%lf",&a,&b);
    x=(a/b);
    printf("floor %.0lf / %.0lf = %.0lf\n",a,b,floor(x));
    printf("ceil %.0lf / %.0lf = %.0lf\n",a,b,ceil(x));
    printf("round %.0lf / %.0lf = %.0lf\n",a,b,round(x));

    return 0;
}
