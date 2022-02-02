/* Count the number of natural numbers n (102 <= n <= 987), in
where all three digits are different */

#include <stdio.h>

int main()
{
    int counter, number;
    number  = 102;
    counter = 0;
    
    while(number != 988)
    	{
    	if ((number / 100 != number % 10) && (number / 100 != number / 10 % 10) && (number / 10 % 10 != number % 10))
    		counter++;
    	number++;
    	}
    printf("\n%d\n", counter);
}