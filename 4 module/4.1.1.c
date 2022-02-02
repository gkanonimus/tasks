/* Count the number of natural numbers n (111 <= n <= 999) that contain two identical digits */

#include <stdio.h>

int main()
{
    int counter, number;
    number  = 111;
    counter = 0;
    
    while(number != 1000)
    	{
    	if ((number / 100 == number % 10)||(number / 100 == number / 10 % 10) || (number / 10 % 10 == number % 10))
    		counter++;
    	number++;
    	}
    printf("\n%d\n", counter);
}