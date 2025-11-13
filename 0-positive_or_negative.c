#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * Agbai Samuel Chibuike
 * WinMingle Community C Training
 * This is a program that generates a random number and prints its value
 */
int main(void)
{
    int n;
    srand(time(0));    // Seed the random number generator
    n=rand( )-RAND_MAX/2    // Generates either a positive or negative  number
    if n>0
        printf("Number is positive!\n");
    else if
        printf("Number is negative!\n");
    else (n==0)
        printf("Number is zero!\n")
            return 0;
}
