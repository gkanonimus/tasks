/*The number n (n > 2) and the elements of three
n × n square integer matrices. Using to place matrices
dynamic memory, enter these matrices and print out the one in which there are more
zero rows (assume that there is only one such matrix) */
#include <stdio.h>
#include <stdlib.h>
int n;
int func();

int main()
{
    printf("Enter n: ");
    scanf("%d", &n);
    
    int count[3] = {0, 0, 0};
    
    int *ptr;
    printf("Enter array:\n");
    ptr = (int*)malloc(3 * n * n * sizeof(int));
    for (int i = 0; i < 3 * n * n; i++)
    {
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int temp = 0;
            for (int k = 0; k < n; k++)
            {
                if (ptr[i * n * n + j * n + k] == 0)
                {
                    temp++;
                }
            }
            if (temp == n)
            {
                count[i]++;
            }
        }
    }
    free(ptr);
    
    
    if (count[0] >= count[1] && count[0] >= count[2])
    {
        printf("Index of string is 0\n");
    }
    if (count[1] >= count[0] && count[1] >= count[2])
    {
        printf("Index of string is 1\n");
    }
    if (count[2] >= count[0] && count[2] >= count[1])
    {
        printf("Index of string is 2\n");
    }
}