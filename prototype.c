#include <stdio.h>

void hello(char[], int); // function prototype

int main()
{

    // function prototype
    // what is it?
    // fuction declaration, w/o a body,before main()
    // Ensures that call to a function are made with the correct arguments

    // IMPORTANT
    // many C compilers do not check for param matching
    // Missing arguments will result in unexpected behavior
    // A function prototype cause the compiler to flag an error if arguments are missing

    //ADVANTAGES
    // 1. Easier to navigate a program w/ main() at the top
    // 2. Helps with debugging
    // 3. Commonly use in header files

    char name[] = "Vonn";
    int age = 30;

    hello(name, age);

    return 0;
}

void hello(char name[], int age)
{
    printf("Hi ola %s\n", name);
    printf("You are %d years old\n", age);
}