/* Given a natural number n. Get the smallest number of the form 2^r greater than n */

#include <stdio.h>
int power(int number, int degree);

int main()
{
    int number, degree;
    number = 1984;

    for(degree = 0; power(2, degree) < number; degree++);
    printf("\n%d\n", (int)power(2, degree));
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