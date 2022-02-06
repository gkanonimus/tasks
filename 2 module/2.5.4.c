/* Determine the number obtained by writing in reverse order of digits given three-digit integer */

#include <stdio.h>
int power(int number, int degree);

int main()
{
    int k, x;
    x = 374;
    k = 0;

    for (int i = 0; i < 3; i++)
    {
        k += (x / (int)power(10, i) % 10) * power(10, 2-i);
    }
    printf("\n%d\n", k);
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