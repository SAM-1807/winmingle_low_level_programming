#include <stdio.h>
/**
 *Author: Agbai Samuel Chibuike
 *Program: WinMingle Community C Training
 *Description: This is a program that prints the lowercase alphabets in reverse order.
 */
int main(void)
{
    char alph;
    for(alph = 'z'; alph >= 'a'; alph--)
        putchar(alph);
    putchar('\n');
    return 0;
}
