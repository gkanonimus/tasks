/* Given a natural number n. Get the smallest number of the form 2^r greater than n */

#include <stdio.h>
#include <math.h>

int main()
{
    int number, degree;
    number = 1984;
    for(degree = 0; pow(2, degree) < number; degree++);
    printf("\n%d\n", (int)pow(2, degree));
}