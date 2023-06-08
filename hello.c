#include <stdio.h>
#include <stdbool.h>

/* int main()
{
    //escape sequence = character combination consisting of a backslash \ followed by a letter or combination of digits.they specific actions within a line or string of text.
    //\n = newline
    //\t = tab

    // this is a comment
    printf("hi there\n");
    printf("hi also there\n");
    // sampple of the \t
    printf("123\t\n");
    printf("1\t2\t3\t4\n");
    // how to print a qoute
    printf("\"I love pizza\" - Vonn Ryann\n");
    return 0;
} */

int main()
{
    // variable = Allocated space in memory to store a value.
    //            We refer to a variable's name to access the stored value.
    //            That variable now behaves as if it was the value it contains.
    //! SECTION   but we need to declare what type of data we are storing
    // printf("double main is working?\n");
    int x;       // this is a declaration
    x = 123;     // this is a initialization
    int y = 321; // this is a declaration and initialization

    float c = 3.02123467890;                          // 4bytes (32 bits of precision) 6 - 7 digits of %f
    double d = 3.021234567890123456;                  // 8bytes (64 bits of precision) 15 - 16 digits this is the command %lf
    bool e = false;                                   // 1byte (true or false) %d
    char a = 'C';                                     // single character %c
    char b[] = "Vonn";                                // arrays of character %s
    char f = 120;                                     // 1byte (-128 to +127) %d or %c
    unsigned char g = 255;                            // 1byte (0 to +255) %d or %c
    short int h = 32767;                              // 2bytes (-32,768 to +32.767) %d
    unsigned short int i = 65534;                     // 2bytes (0 to +65,535) %d
    int j = 214748647;                                // 4 bytes (-2,147,483,648 to +2,147,483,647) %d
    unsigned int k = 429467295L;                      // 4bytes (0 to +4,294,967,259) %u
    long long int l = 495039485945029384;             // 8 bytes (-9 quintillion to +9 quintillion) %lld
    unsigned long long int m = 18446744073709551615U; // 8 bytes (0 quintillion to +18 quintillion) %llu

    printf("and my grade is %c\n", a);            // char
    printf("hi my name is %s\n", b);              // character array
    printf("I am averaging around %f\n", c);      // float
    printf("I am averaging around %0.15lf\n", d); // double
    printf("e\t%d\n", e);                         // boolean
    printf("f\t%d\n", f);                         // char is numeric value
    printf("g\t%d\n", g);                         // unsigned char as numeric value
    printf("h\t%d\n", h);                         // short
    printf("i\t%d\n", i);                         // unsigned short
    printf("j\t%d\n", j);                         // int
    printf("k\t%u\n", k);                         // unsigned int
    printf("l\t%lld\n", l);                       // long long int
    printf("m\t%llu\n", m);                       // unsigned long long int
    return 0;
}