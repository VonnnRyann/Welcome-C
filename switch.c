#include <stdio.h>

int main()
{

    // switch = A more efficient alternative to using many "else if" statement
    //          allows a value to be tested for equality against many cases

    char grade;

    printf("\n Enter a letter grade: ");
    scanf("%c", &grade);

    // its a bad practice
    /* if (grade == "A")
    {
        printf("perfect!\n");
    }
    else if (grade == "B")
    {
        printf("You did good!\n");
    }
    else if (grade == "C")
    {
        printf("you have to study more\n");
    }
    else if (grade == "D")
    {
        printf("repeat your course again\n");
    }
    else if (grade == "F")
    {
        printf("back where you belong\n");
    }
    else
    {
        printf("its not valid\n");
    } */

    switch (grade)
    {
    case 'A':
        printf("Perfect!\n");
        break;
    case 'B':
        printf("its totally fine!\n");
        break;
    case 'C':
        printf("study more!\n");
        break;
    case 'D':
        printf("its not enough!\n");
        break;
    case 'F':
        printf("you failed!\n");
        break;
    default:
        printf("its not valid grade\n");
        break;
    }

    return 0;
}