/* Count the number of digits in the decimal notation of a non-negative integer n */

#include <stdio.h>

int main()
{
    int counter, number;
    number = 123456789;
    
    for (counter = 0; number != 0; counter++)
        number /= 10;
    printf("\n%d\n", counter);
}