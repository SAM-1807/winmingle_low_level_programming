#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * Author: Agbai Samuel Chibuike
 * Program: WinMingle Community C Training
 * This is a program that assigns a random number to a variable each time it runs and prints whether the number is positive, zero or negative.
 */
int main(void)
{
    int n;
    srand(time(0));    //Seed the random number generator
    n = rand() - RAND_MAX / 2;    //Generates a random number
    if(n > 0)
    {
        printf("Number is positive\n");
    }
        else if(n < 0)
        {
            printf("Number is negative\n");
        }
            else
            {
                printf("Number is zero\n");
            }
    return 0;
}
