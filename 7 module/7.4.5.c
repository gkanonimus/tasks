#include <stdio.h>
#include <stdlib.h>
int n;

int main()
{
    printf("Enter n: ");
    scanf("%d", &n);
    int count1 = 0, count2 = 0, count3 = 0, temp;
    
    printf("Enter the first array:\n");
    int *ptr1;
    ptr1 = (int*)malloc(n * n * sizeof(int));
    for (int i = 0; i < n * n; i++)
        scanf("%d", &ptr1[i]);
    for (int i = 0; i < n; i++)
    {
        temp = 0;
        for (int j = 0; j < n; j++)
            if (ptr1[i * n + j] == 0)
                temp++;
            if (temp == n)
                count1++;
    }
    
    printf("Enter the second array:\n");
    int *ptr2;
    ptr2 = (int*)malloc(n * n * sizeof(int));
    for (int i = 0; i < n * n; i++)
        scanf("%d", &ptr2[i]);
    for (int i = 0; i < n; i++)
    {
        temp = 0;
        for (int j = 0; j < n; j++)
            if (ptr2[i * n + j] == 0)
                temp++;
            if (temp == n)
                count2++;
    }
    
    printf("Enter the third array:\n");
    int *ptr3;
    ptr3 = (int*)malloc(n * n * sizeof(int));
    for (int i = 0; i < n * n; i++)
        scanf("%d", &ptr3[i]);
        
    for (int i = 0; i < n; i++)
    {
        temp = 0;
        for (int j = 0; j < n; j++)
            if (ptr3[i * n + j] == 0)
                temp++;
            if (temp == n)
                count3++;
    }
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
    free(ptr1);
    free(ptr2);
    free(ptr3);
}