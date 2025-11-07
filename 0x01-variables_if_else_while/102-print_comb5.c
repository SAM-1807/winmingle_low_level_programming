#include <stdio.h>
/**
 * Author: Agbai Samuel Chibuike
 * Program: WinMingle Community C Training
 * Description: This is a program that prints all possible combinations of two two-digit numbers.
 */
int main(void)
{
    int a, b;
    for(a = 0; a < 99; a++)
    {
        for(b = a+1; b < 100; b++)
        {
            printf("%02d %02d", a, b);
            if(!(a == 98 && b == 99))
            {
                printf(", ");
            }
        }
    }
    putchar('\n');
    return 0;
}
