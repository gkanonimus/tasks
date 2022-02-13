/* Describe a function that, in an integer array of n elements, swaps the maximum and minimum elements (assume that all elements in the array are different) */

#include <stdio.h>
int *swap(int *array, int n);

int main()
{
    int n;
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    *swap(array, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
}

int *swap(int *array, int n)
{
    int min, min_ind, max, max_ind, temp;
    min = array[0];
    max = array[0];
    
    for (int i = 0; i < n; i++)
    {
        if (array[i] < min)
        {
            min = array[i];
            min_ind = i;
        }
        if (array[i] > max)
        {
            max = array[i];
            max_ind = i;
        }
    }
    temp = array[min_ind];
    array[min_ind] = array[max_ind];
    array[max_ind] = temp;
    return array;
}