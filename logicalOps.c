#include <stdio.h>
#include <stdbool.h>

int main()
{

    // logical operator = && check if two condition are true
    // logical operator = || check if atlease 1 condition are true

    /* // &&

    float temp = 25;
    bool sunny = true;

    if (temp >= 0 && temp <= 30 && sunny)
    {
        printf("The Weather is Good\n");
    }
    else
    {
        printf("The Weather is so bad");
    } */

    // || operator

    /* float temp = 40;

    if (temp <= 0 || temp >= 30)
    {
        printf("The Weather is so bad\n");
    }
    else
    {
        printf("The Weather is Good\n");
    } */

    // ! not logical operator

    bool sunny = true;

    if (!sunny)
    {
        printf("Its sunny outside\n");
    }
    else
    {
        printf("Its cloudy outside\n");
    }

    return 0;
}
