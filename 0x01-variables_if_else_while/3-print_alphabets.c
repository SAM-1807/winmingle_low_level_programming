#include <stdio.h>
/**
 *Author: Agbai Samuel Chibuike
 *Program: WinMingle Community C Training
 *Description: This is a program that prints the alphabets in lowercase, then uppercase, followed by a new line.
 */
int main(void)
{
    for(char alph='a'; alph<='z'; alph++)
    {
        putchar(alph);
    }
    for(char alph='A'; alph<='Z'; alph++)
    {
        putchar(alph);
        putchar('\n');
    }
            return 0;
}               
