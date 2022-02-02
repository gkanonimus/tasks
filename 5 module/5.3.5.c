/* Recursively describe the function c(m, n), where 0 ≤ m ≤ n, to calculate the binomial coefficient C(m, n) */

#include <stdio.h>
int binom(int n, int m);

int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    
    printf("\n%d\n", binom(m, n));
}

int binom(int m, int n)
{
    if(!m && !n)
    {
        return 0;
    }
    else
    {
        if(!n || (m == n && m > 0))
        {
            return 1;
        }
        else
        {
            return binom(m - 1, n - 1) + binom(m - 1, n);
        }
    }
}