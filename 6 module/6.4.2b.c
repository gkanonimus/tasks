/* Describe a function that determines the index of the first element of an integer array of n elements, the value of which is equal to a given number x. If there is no specified value in the array, the function returns -1. When solving a problem, consider options:
b) array elements are sorted in ascending order (use binary search algorithm) */

#include <stdio.h>
int func_2(int *array, int x, int n);

int main()
{
    int x, n;
    scanf("%d", &x);
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("%d\n", func_2(array, x, n));
}

int func_2(int *array, int x , int n)
{
    int low, middle, high;
    low  = 0;
    high = n - 1;
    
    while (low <= high)
    {
        middle = (low + high) / 2;
        if (array[middle] < x)
        {
            low = middle;
        }
        else
        {
            if (array[middle] > x)
            {
                high = middle;
            }
            else
            {
                return middle;
            }
        }
    }
    return -1;
}