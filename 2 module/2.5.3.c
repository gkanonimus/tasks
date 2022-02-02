/* To the integer variable k, assign a value equal to the first digit of the fractional part in the notation of a real positive number x */

#include <stdio.h>

int main()
{
    float x;
    int k;
    x = 97.2117;
    k = ((int)(10 * x)) % 10;
    printf("\n%d\n", k);
}