/* Describe a function that checks if an integer has a non-negative
the number n by the specified property. If yes, the function returns
value 1 and 0 otherwise. Properties:
a) n is a perfect square
b) n is a prime number
c) n is a power of 3 */

#include <stdio.h>
#include <stdbool.h>
bool is_square(int number);
bool is_prime(int number);
bool is_degree(int number);
int result = 1;

int main()
{
    int number, oper;
    
    scanf("%d %d", &number, &oper);
    
    switch(oper)
    {
        case 1:
        {
            printf("\n%d\n", is_square(number));
            break;
        }
        case 2:
        {
            printf("\n%d\n", is_prime(number));
            break;
        }
        case 3:
        {
            printf("\n%d\n", is_degree(number));
            break;
        }
        default:
        {
            printf("Error");
            break;
        }
    }

}

bool is_square(int number)
{
    int numb = 1;
    
    while(numb * numb < number)
    {
        numb++;
    }
    return !(number - numb * numb);
}

bool is_prime(int number)
{

    for(int divider = 2; divider != number; divider++)
        {
            if(number % divider == 0)
            {
                break;
            }
        }
    return true;
}

bool is_degree(int number)
{
    while(result < number)
    {
        result = result * 3;
    }
    return result == number;
}