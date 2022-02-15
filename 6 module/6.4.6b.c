/* Describe a function that, given an integer array of n elements, defines:
b) the number of distinct elements in the array */

#include <stdio.h>
int check(int *array, int n);

int main()
{
    int n;
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("%d", check(array, n));
}

int check(int *array, int n)
{
    int counter = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (array[i] == array[j])
            {
                counter++;
                break;
            }
        }
    }
    return n - counter;
}