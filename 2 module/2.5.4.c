/* Determine the number obtained by writing in reverse order of digits
given three-digit integer */

#include <stdio.h>
#include <math.h>

int main()
{
    int k, x;
    x = 374;
    k = 0;
    for (int i = 0; i < 3; i++)
    	{
    	k += (x / (int)pow(10, i) % 10) * pow(10, 2-i);
    	}
    printf("\n%d\n", k);
}