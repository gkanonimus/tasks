/* "Unpack" a 32-bit unsigned integer into four characters */

#include <stdio.h>

int main()
{
    unsigned int x;
    char a, b, c, d;
    x = 1079470206;     // 0010 0000 0101 0111 0110 1000 0111 1110
    a = x >> 24;        // @ = 0010 0000
    b = x << 8 >> 24;   // W = 0101 0111
    c = x >> 8 % 16;    // h = 0110 1000
    d = x % 128;        // ~ = 0111 1110
    printf("\n%c\t%c\t%c\t%c\n", a, b, c, d);
}