/* #include <stdio.h>
#include <ctype.h>

int main()
{

    int age;

    printf("\nEnter your age: ");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("Thats great your old enough!\n");
    }
    else if (age < 0)
    {
        printf("Stop fuck around in my code\n");
    }
    else if (age == isalpha(age))
    {
        printf("nice try please enter a number!");
    }

    else
    {
        printf("Eat more to become 18 years old!\n");
    }

    return 0;
} */

/* #include <stdio.h>
#include <ctype.h>

int main()
{
    char ch;

    printf("Enter an alphabet: ");
    scanf("%c", &ch);

    if (!isalpha(ch))
    {
        printf("You did not enter an alphabet.\n");
    }
    else if (isupper(ch))
    {
        printf("You entered an uppercase letter.\n");
    }
    else
    {
        printf("You entered a lowercase letter.\n");
    }

    return 0;
} */

#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch;

    printf("Enter a number: ");
    scanf("%c", &ch);

    if (!isdigit(ch))
    {
        printf("Error: You did not enter a number.\n");
    }
    else
    {
        int num = ch - '0';
        printf("You entered the number %d.\n", num);
    }

    return 0;
}
