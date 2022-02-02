/* Given a natural number n. Get all its natural divisors */

#include <stdio.h>

int main()
{
    int number, divider;
    number = 144;
    
    for(divider = 1; divider != number; divider++)
    	if (number % divider == 0)
    		printf("\nDivider is %d\n", divider);
}