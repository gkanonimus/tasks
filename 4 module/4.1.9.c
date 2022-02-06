/* Print first n primes */

#include <stdio.h>

int main()
{
    int n, count, number, divider, temp_count;
    n     = 20000;
    count = 0;
    
    for(number = 3; n > count; number += 2)
    {
        for(divider = 2; divider != number; divider++)
        {
            if (number % divider == 0)
            {
                temp_count++;
                break;
            }
        }
    	if (!temp_count)
        {
    	    count++;
    	}
    	temp_count = 0;
    }
}