/***
convert-digit-to-int.c
simple program to convert a digit into an int
the first example (which uses digit5 and digit8) is incorrect, 
while the second example is correct.
***/

#include <stdio.h>

int main(void) {
    char digit5 = '5', digit8 = '8';
    int sumDigits = digit5 + digit8;
    printf("digit5 + digit8 = %d (oops!)\n", sumDigits);

    char value5 = digit5 - '0'; // get the numerical value of 5
    char value8 = digit8 - '0'; // get the numerical value of 8
    sumDigits = value5 + value8;
    printf("value5 + value8 = %d\n", sumDigits);
}