/* Determine if a natural number n is a power of 3 */

#include <stdio.h>

int main()
{
    int number;
    number = 27;
    
    while (number % 3 == 0)
        number /= 3;
    if (number == 1)
        printf("\nTrue\n");
    else printf ("\nFalse\n");
}