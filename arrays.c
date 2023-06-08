#include <stdio.h>

int main()
{

    // array = a data structure that can store many values of the same data type.

    /* double prices[] = {5.0, 10.0, 20.0, 30.0, 40.0};

    printf("$%.2lf\n", prices[4]); */

    // Looping an array

    double prices[] = {5.0, 10.0, 20.0, 30.0, 40.0};

    for (int i = 0; i < sizeof(prices) / sizeof(prices[0]); i++)
    {
        printf("$%.2lf\n", prices[i]);
    }

    return 0;
}