/* Determine if the cube of the sum of the digits of a natural number n is equal to n^2 */

#include <stdio.h>
int power(int number, int degree);

int main()
{
    int number, temp, check;
    check = number = 27;

    for (temp = 0; check != 0;)
        {
            temp += check % 10;
            check /= 10;
        }
    if (power(number, 2) == power(temp, 3))
    {
        printf("\nTrue\n");
    }
    else
    {
        printf("\nFalse\n");
    }
}

int power(int number, int degree)
{
    int result;
    result = 1;
    
    while(degree > 0)
    {
        result = result * number;
        degree--;
    }
    return result;
}