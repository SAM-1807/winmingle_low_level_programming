#include <stdio.h>
/**
 *Author: Agbai Samuel Chibuike
 *Program: WinMingle Community C Training
 *Description: This is a program that prints all single digit base 10 numbers without char variables, using only two putchar calls.
 */
int main(void)
{
    int i;
    for(i = '0'; i <= '9'; i++)
    {
        putchar(i + '0');
    putchar('\n');
    }
    return 0;
}
