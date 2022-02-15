/* Write a function that sorts the elements of an integer array of n elements in non-decreasing order using the following sorting algorithm:
b) exchange sort (bubble method): pairs of neighboring array elements xk and xk+1 (k = 0, 1, …, n - 2) are sequentially compared and, if xk > xk+1 , then they are rearranged; as a result, the largest element will be in its place at the end of the array; then the same method is applied to all elements of the array except the last one, and so on */

#include <stdio.h>
int bubble(int *array, int n);

int main()
{
    int n;
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    bubble(array, n);
    for (int i = 0; i < n; i++)
    {
    printf("%d ", array[i]);
    }
}

int bubble(int *array, int n)
{
    int temp;
    while (n > 1)
    {
        for (int i = 0; i < n; i++)
        {
            if (array[i] > array[i + 1])
            {
                temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }
        }
        n--;
    }
    return *array;
}