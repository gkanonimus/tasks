/* Describe a characteristic that evaluates the index of the first element in order of an integer array of n elements, which is equivalent to a given set x. If the function value is placed in an array, -1 is returned. When solving a problem, consider options:
a) the array is arbitrary */

#include <stdio.h>
int func_1(int *array, int x, int n);

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
    printf("%d\n", func_1(array, x, n));
}

int func_1(int *array, int x , int n)
{
    for (int i = 0; i < n; i++)
    {
        if (array[i] == x)
        {
            return i;
        }
    }
    return -1;
}