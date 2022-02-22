/* Write a function that sorts the elements of an integer array of n elements in non-decreasing order using the following sorting algorithm:
a) selection sort: the maximum element of the array is found and swapped with the last element, then the same method is applied to all elements of the array except the last one (it is already in its final place), etc */

#include <stdio.h>
int selection(int *array, int n);

int main()
{
    int n;
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    selection(array, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
}

int selection(int *array, int n)
{
    int temp, temp_ind, max;
    while (n > 0)
    {
        max = array[0];
        for (int i = 0; i < n; i++)
        {
            if (array[i] > max)
            {
                max = array[i];
                temp_ind = i;
            }
        }
        temp = array[n - 1];
        array[n - 1] = max;
        array[temp_ind] = temp;
        temp_ind = temp = 0;
        n--;
    }
    return *array;
}