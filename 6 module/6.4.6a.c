/* Describe a function that, given an integer array of n elements, defines:
a) whether there are identical elements in the array (in the case of a positive answer, the value 1 is returned and 0 otherwise) */

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
    printf("%d ", check(array, n));
}

int check(int *array, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (array[i] == array[j])
            {
                return 1;
            }
        }
    }
    return 0;
}