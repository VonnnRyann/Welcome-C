#include <stdio.h>
#include <string.h> // using it for while loops

int main()
{

    // for loop

    /*  // for loop = repeat a section of code a limited amount of times

     for (int i = 1; i <= 10; i++) // for (int i = 1; i <= 10; i+2) result is counting from 1 going to 2 1,3,5,7,9
     {
         printf("%d\n", i);
     } */

    // while loop

    // while loop = repeats a section of code possibly unlimited times.
    // WHILE some condition remains true
    // a while loop might not execute at all

    /* char name[25];

    printf("what is your name?:");
    fgets(name, 25, stdin);
    name[strlen(name) - 1] = '\0';

    while (strlen(name) == 0)
    {
        printf("Please enter your name\n");
        printf("what is your name?:");
        fgets(name, 25, stdin);
        name[strlen(name) - 1] = '\0';
    }

    printf("Hello %s\n", name); */

    // do while loop

    // while loop = checks condition, THEN executed a block of code if condition is true
    // do while loop = always executed a block of code once, THEN checks a condition

    /* int number = 0;
    int sum = 0;

    do
    {
        printf("Enter a above number 0:");
        scanf("%d", &number);
        if (number > 0)
        {
            sum += number;
        }
    } while (number > 0);

    printf("sum: %d\n", sum); */

    // nested loop = a loop inside of another loop

    int rows;
    int columns;
    char symbol;

    printf("Enter a number of rows:");
    scanf("%d", &rows);

    printf("Enter a number of columns:");
    scanf("%d", &columns);
    scanf("%c", &symbol);

    printf("Enter a symbol to use:");
    scanf("%c", &symbol);

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= columns; j++)
        {
            printf("%c", symbol);
        }
        printf("\n");
    }

    return 0;
}