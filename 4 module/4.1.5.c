/* Determine if the cube of the sum of the digits of a natural number n is equal to n^2 */

#include <stdio.h>
#include <math.h>

int main()
{
    int number, temp, check;
    check = number = 27;

    for (temp = 0; check != 0;)
        {
            temp += check % 10;
            check /= 10;
        }
    if (pow(number, 2) == pow(temp, 3))
        printf("\nTrue\n");
    else
        printf("\nFalse\n");
}