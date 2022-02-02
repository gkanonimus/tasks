/* "Pack" four characters into a 32-bit unsigned integer, then "unpack" the 32-bit unsigned integer into four characters */

#include <stdio.h>

int main()
{
    unsigned int x;
    char a, b, c, d;
    a = 'g';   // g = 0110 0111
    b = '7';   // 7 = 0011 0111
    c = 'K';   // K = 0100 1011
    d = '+';   // + = 0010 1011
    x = (((((a << 8) | b) << 8) | c) << 8) | d;
    printf("\n%u\n", x);
    
    a = x >> 24;
    b = x << 8 >> 24;
    c = x >> 8 & 0xFF;
    d = x & 0xFF;
    printf("\n%c\t%c\t%c\t%c\n", a, b, c, d);
}