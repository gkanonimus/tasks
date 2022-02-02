/* Without using additional variables, swap the values of two variables of type int */

#include <stdio.h>

int main()
{
    int x, y;
    x = 15;
    y = 23;
    x = x + y;
    y = x - y;
    x = x - y;
    printf("\n%d\n%d", x, y);
}