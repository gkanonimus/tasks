/* Count the number of natural numbers n (11 <= n <= 999),
which are palindromes and print them */

#include <stdio.h>

int main()
{
    int counter, number;
    number  = 11;
    counter = 0;
    
    while (number != 1000)
    {
        if (number < 100)
        {
            if (number / 10 == number % 10)
            {
                counter++;
                printf("\n%d\n", number);
            }
        }
        
        else
        {
            if (number / 100 == number % 10)
            {
                counter++;
                printf("\n%d\n", number);
            }
        }
        number++;
    }
    printf("\nTotal %d palindromes\n", counter);
}