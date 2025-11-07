#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *Author: Agbai Samuel Chibuike
 *Program: WinMingle Community C Training
 *Description: This is a program that prints the last digit of a random number 'n'
 */
int main(void)
{
    int n, last_digit;
    srand(time(0));    // Seed a random number generator
    n=rand( );    // Generate a random number
    last_digit = n % 10;
        printf("The last_digit of %d is %d, and is ", n, last_digit);
        if (last_digit>5)     {
            printf("and is greater than 5\n");
        }
        else if(last_digit == 0)    {
            printf("and is equal to 0\n");
        }
        else    {
            printf("and is less than 6 and  not 0\n");
        }
    return 0;
}
