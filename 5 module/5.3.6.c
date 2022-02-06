/* Program. Recursively describe the function of calculating gcd(n, m) - the greatest common divisor of non-negative integers n and m, based on the relation gcd(n, m) = gcd(m, r), where r is the remainder of dividing n by m. Use it to find the greatest common divisor of natural numbers a and b. Compare the efficiency of recursive and non-recursive implementation of GCD calculation functions */

#include <stdio.h>
int gcd(int a, int b);
void swap(int *a, int *b);

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("\ngcd(%d, %d) = %d\n", a, b, gcd(a, b));
}

int gcd(int a, int b)
{
    if(a == b)
    {
        return a;
    }
    else
    {
        if(a > b)
        {
            if(a % b == 0)
            {
                return b;
            }
            else
            {
            return gcd(a %= b, b);
            }
        }
        else
        {
            swap(&a, &b);
            return gcd(a, b);
        }
    }
}

void swap(int *a, int *b)
{
    int c;
    c  = *b;
    *b = *a;
    *a = c;
}