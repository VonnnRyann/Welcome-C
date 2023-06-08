#include <stdio.h>
#include <math.h>

int main()
{

    double A;
    double B;
    double C;

    printf("Enter Side A :");
    scanf("%lf", &A);

    printf("Enter side B :");
    scanf("%lf", &B);

    C = sqrt(A * A + B * B);

    return 0;
}