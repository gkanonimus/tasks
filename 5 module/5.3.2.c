/* Program. The number n (n > 0) is given on the standard input stream and
a sequence of n integers. After describing the corresponding function, find
the number of sequence elements that are:
a) Fibonacci numbers (given by the ratio
f0 = 1, f1 = 1, fk + 1 = fk - 1 + fk, k >1)
b) palindromes */

#include <stdio.h>
#include <stdbool.h>
bool is_square(int number);
bool is_pal(int number);
int power(int number, int degree);

int main()
{
    int n, number, counter_fib, counter_pal;
    scanf("%d", &n);
    counter_fib = counter_pal = 0;
    
    while(n > 0)
    {
        scanf("%d", &number);
        counter_fib += is_square(number);
        counter_pal += is_pal(number);
        n--;
    }
    printf("\nAmong these numbers %d belong", counter_fib);
    printf(" to the fibonacci sequence\n");
    printf("\n%d of these numbers", counter_pal);
    printf(" are palindromes\n");
}

bool is_square(int number)
{
    int numb = 1;
    
    while(numb * numb < (5 * (number * number) - 4))
    {
        numb++;
    }
    if(numb * numb == (5 * (number * number) - 4))
    {
        return 1;
    }
    else
    {
        numb = 1;
        while(numb * numb < (5 * (number * number) + 4))
        {
            numb++;
        }
        return(numb * numb == (5 * (number * number) + 4));
    }
}

bool is_pal(int number)
{
    int rev, length, comp;
    rev = length = 0;
    comp = number;
    
    while(comp / 10 > 0)
    {
        length++;
        comp /= 10;
    }
    
    comp = number;
    while(comp > 0)
    {
        rev = rev * 10 + comp % 10;
        comp /= 10;
    }
    return number == rev;
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