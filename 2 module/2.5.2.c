/* Assign a value to the integer variable k equal to the sum of the digits in the notation of a positive three-digit number x */

#include <stdio.h>
#include <math.h>

int main()
{
    int k, x;
    x = 374;
    k = 0;
    for (int i = 0; i < 3; i++)
    	{
    	k += x / (int)pow(10, i) % 10;
    	}
    printf("\n%d\n", k);
}