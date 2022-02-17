/*  Invert 5 least significant bits of variable x of type unsigned int,
leave the rest of the bits unchanged */

#include <stdio.h>

int main()
{
    unsigned int x, y;
    x = 789;         //11 00001 0101
    y = x ^ 31;      // 31 = 11111
    printf("%d",y);  //11 0000 1010
}