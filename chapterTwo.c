#include <stdio.h>
#include <stdbool.h>

int main()
{
    // format specifier % = defines and formats a type of data to be displayed

    // %c = character
    // %s = string (array of characters)
    // %f = float
    // %lf = float
    // %d = integer

    // %.1 = decimal precision
    // %1 = minimum field width
    // %- = left align

    float item1 = 5.75;
    float item2 = 100;
    float item3 = 100.99;

    printf("Item 1: $%-8.2f\n", item1); // - is from left alignment
    printf("Item 1: $%-8.2f\n", item1); // positive or normal is from right alignment
    printf("Item 2: $%-8.2f\n", item2);
    printf("Item 3: $%-8.2f\n", item3);

    // const = fixed value that cannot be change by the program during its execution

    const float PI = 3.14159;

    printf("%f", PI);

    return 0;
}