#include <stdio.h>

// invoking a function

/* void function()
{
    printf("Its my birthday on march\n");
    printf("Its my birthday on march27\n");
    printf("Its my birthday on march1986\n");
} */

// Passing the arguments as a parameter

void birthday(char name[], int age)
{

    printf("hey Happy birthday %s\n", name);
    printf("You are %d old\n", age);
}

// return statement

double square(double x)
{
    return x * x;
}
int main()
{
    /* function();
    function(); */
    char name[] = "Vonn";
    int age = 30;

    birthday(name, age);

    double x = square(3.14);
    printf("%.4lf\n", x);

    return 0;
}