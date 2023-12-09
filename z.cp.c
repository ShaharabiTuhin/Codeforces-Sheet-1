#include <stdio.h>
#include <math.h>

int main() {
    long long int a,b,c,d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

    //long long int result1 = A * B;
    //long long int result2 = C * D;

    if (b * log(a) > d * log(c))
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}

