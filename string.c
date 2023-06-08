#include <stdio.h>
#include <string.h>

int main()
{

    char string1[] = "Vonn";
    char string2[] = "Ryann";

    // strlwr(string1);                  //converts a string to lowerCase
    // strupr(string1);                  //converts a string to upperCase
    // strcat(string1,string2);          //appends string2 to end of string1
    // strncat(string1,string2, 1);      //appends  n char from string2 to string 1
    // strcpy(string1, string2);         //copy string2 to string1
    // strncpy(string1, string2, 4);     //copy n char of string2 to string1

    // strset(string1, '?');               //set all char of a string to a given char
    // strnset(string1, '?', 1);           //sets first n char of a string to a given char
    // strrev(string1);                    //reverse a string

    // int result = strlen(string1);                   // returns string length as in
    int result = strcmp(string1, string2); // string compare all char
    // int result = strncmp(string1, string2, 1);     //string compare n char
    // int result = strcmpi(string1, string1);        //string compare all (ignore case)
    // int result = strnicmp(string1, string1, 1);    //string compare n char (ignore case)

    // printf("%d\n", result);

    if (result == 0)
    {
        printf("Wow its cool\n");
    }
    else
    {
        printf("its not cool\n");
    }

    return 0;
}