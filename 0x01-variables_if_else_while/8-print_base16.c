#include <stdio.h>
/**
 *Author: Agbai Samuel Chibuike
 *Program: WinMingle Community C Training
 *Description: This is a program that prints all the numbers of base 16 in lowercase.
 */
int main(void)
{
    int i;
    for(i = 0; i < 17; i++)
        if(i <= 9)
        {
            putchar(i + '0');
        }
        else
        {
            putchar(i - 10 + 'a');
    putchar('\n');
}
    return 0;
}
