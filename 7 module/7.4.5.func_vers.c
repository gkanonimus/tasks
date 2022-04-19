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
    
    int count1 = func();	
    int count2 = func();
    int count3 = func();
    
    
    if (count1 >= count2 && count1 >= count3)
    {
        printf("Index of string is 0\n");
    }
    if (count2 >= count1 && count2 >= count3)
    {
        printf("Index of string is 1\n");
    }
    if (count3 >= count2 && count3 >= count1)
    {
        printf("Index of string is 2\n");
    }
}

int func()
{
    int count = 0;
    int *ptr;
    printf("Enter array:\n");
    ptr = (int*)malloc(n * n * sizeof(int));
    for (int i = 0; i < n * n; i++)
    {
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        int temp = 0;
        for (int j = 0; j < n; j++)
        {
            if (ptr[i * n + j] == 0)
            {
                temp++;
            }
        }
        if (temp == n)
        {
            count++;
        }
    }
    free(ptr);
    return count;
}