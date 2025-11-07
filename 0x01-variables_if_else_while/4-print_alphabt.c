#include <stdio.h>
/**
 *Author: Agbai Samuel Chibuike
 *Program: WinMingle Community C Training
 *Description: This is a program that prints all alphabets in lowercase except q and e, followed, by a new line.
 */
    int main(void)
    {
            for(char alph = 'a'; alph <= 'z'; alph++)
            {
                putchar((alph == 'e') ? 'E': (alph == 'q') ? 'Q': alph);
            putchar('\n');
            }
                return 0;
    }
