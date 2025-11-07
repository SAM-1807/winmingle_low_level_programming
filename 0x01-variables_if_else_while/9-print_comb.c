#include <stdio.h>
/**
 *Author: Agbai Samuel Chibuike
 *Program: WinMingle Community C Training
 *Description: This is a program that prints all possible single digit numbers seperated by commas and spaces.
 */
int main(void)
{
    int i;
    for(i = 0; i <= 9; i++)
    {
        putchar(i + '0');
    }
    if (i != 9)
    {
        putchar(',');
        putchar(' ');
    }
    putchar('\n');
    return 0;
}
