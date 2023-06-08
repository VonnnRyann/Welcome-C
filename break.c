#include <stdio.h>

int main()
{

    // continue = skips rest of code & forces the next iteration of the loop
    // break = exits a loop/switch

    for (int i = 1; i <= 20; i++)
    {
        if (i == 13)
        {
            continue; // or if its break then it will stop before 13
        }

        printf("%d\n", i);
    }

    return 0;
}