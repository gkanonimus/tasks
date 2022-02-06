/* Recursively describe the function for calculating the nth Fibonacci number and use it to calculate the 10th Fibonacci number */

#include <stdio.h>
unsigned long long fib(int n);

int main()
{
    int n;
    scanf("%d", &n);
    printf("\n%lld\n", fib(n));
}

unsigned long long fib(int n)
{
    if(n == 1 || n == 2)
    {
        return n - 1;
    }
    else
    {
        return fib(n - 1) + fib(n - 2);
    }
}