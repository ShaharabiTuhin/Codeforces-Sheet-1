#include <stdio.h>
#include <math.h>

int main()
{
    float n;
    scanf("%f", &n);

    float int_part = (int)n;
    float float_part = fmod(n, int_part);
        printf("fmod %f\n\n", float_part);

    if (float_part > 0)
        printf("float %.0f %.3f", int_part, float_part);
    else
        printf("int %.0f", int_part);

    return 0;
}
