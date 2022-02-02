/* Recursively describe the function of calculating x ^ n for real x (x ≠ 0) and integer n */

#include <stdio.h>
float power(float x, int n);

int main()
{
    int   n;
    float x;
    scanf("%f %d", &x, &n);
    printf("%f", power(x, n));
    
}

float power(float x, int n)
{
    int opt;
    opt = (n > 0) ? 1 : ((n < 0) ? -1 : 0);
    
    switch(opt)
    {
        case -1:
        {
            return (n == -1) ? 1 / x : 1 / x * power(x, n + 1);
            break;
        }
        case 0:
        {
            return 1;
            break;
        }
        case 1:
        {
            return (n == 1) ? x : x * power(x, n - 1);
            break;
        }
    }
}