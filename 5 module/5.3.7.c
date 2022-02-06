/* Program. Recursively describe the function of calculating gcd(n1, n2, n3, ..., nm), where m > 2, using the relation: gcd(n1, n2, n3, ..., nk) = gcd(gcd(n1, n2, n3, ..., nk-1), nk), k = 3, 4, ... , m. Use this function to find gcd (a1, a2, a3, ..., a10). */

#include <stdio.h>
int gcd(int a, int b);
void swap(int *a, int *b);

int main()
{
    int n, number, gcd_all;
    scanf("%d", &n);
    
    scanf("%d", &number);
    gcd_all = number;
    n--;
    
    while(n > 0)
    {
        scanf("%d", &number);
        gcd_all = gcd(gcd_all, number);
        n--;
    }
    printf("\nThe GCD of all these numbers is %d\n", gcd_all);
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