/* "Pack" four characters into a 32-bit unsigned integer */

#include <stdio.h>

int main()
{
    unsigned int x;
    char a, b, c, d;
    a = 103;  // 103 = g = 0110 0111
    b = 55;   // 55 = 7 = 0011 0111
    c = 75;   // 75 = K = 0100 1011
    d = 43;   // 43 = + = 0010 1011
    x = a * 16777216 + b * 65536 + c * 256 + d;
    printf("\n%u\n", x);  // 1 731 676 971 = 0110 0111 0011 0111 0100 1011 0010 1011
}