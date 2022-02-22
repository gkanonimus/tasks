/* Write a function that checks whether an integer array of n elements has the specified property. If yes, the function returns 1 and 0 otherwise. Properties:
a) array elements are sorted in ascending order
b) the array is symmetrical (equidistant from the ends of the array
elements are equal) */

#include <stdio.h>
#include <stdbool.h>
bool is_sort(int array[], int n);
bool check(int array[], int n);

int main()
{
    int n;
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("\n%d\n", is_sort(array, n));
    printf("\n%d\n", check(array, n));
}

bool is_sort(int array[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (array[i] > array[i + 1])
        {
            return false;
        }
    }
    return true;
}

bool check(int array[], int n)
{
    int m = n / 2;
    for (int i = 0; i < m; i++, n--)
    {
        if (array[i] != array[n - 1])
        {
            return false;
        }     
    }
    return true;
}