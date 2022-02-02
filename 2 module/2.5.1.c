/* To the integer variable k, assign a value equal to the third digit from the end in the notation of a positive integer x */

#include <stdio.h>

int main()
{
    int k, x;
    x = 56789;
    k = (x / 100) % 10;
    printf("\n%d\n", k);
}