#include <stdio.h>
#include <string.h>

int main()
{
    char name[25]; // 25bytes or more it will buffer
    int age;

    printf("what's your name?");
    // scanf("\n%s", &name);
    fgets(name, 25, stdin);        // accepts the white space
    name[strlen(name) - 1] = '\0'; // get rid the extra string because of fgets method

    printf("\nhow old are you?");
    scanf("%d", &age);

    printf("Hello %s\n", name);
    printf("you are %d years old\n", age);

    return 0;
}
