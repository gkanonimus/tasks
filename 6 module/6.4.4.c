/* Describe a function that performs a cyclic shift by m positions to the right of the elements of a real array of n elements (m < n) */

#include <stdio.h>
void shift(int *array, int n, int m);

int main()
{
    int m;
    scanf("%d", &m);
    int n;
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    shift(array, n, m);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
}

void shift(int *array, int n, int m)
{
    int array_2[n];
    
    for (int i = m; i < n; i++)
    {
        array_2[i] = array[i - m];
    }
    for (int i = 0; i < m; i++)
    {
        array_2[i] = array[i + n - m];
    }
    for (int i = 0; i < n; i++)
    {
        array[i] = array_2[i];
    }
    return;
}