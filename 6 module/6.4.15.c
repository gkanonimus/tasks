/* Describe a function that, in a real matrix of n rows and m columns, determines the number of the row containing the maximum number of positive elements (assume that there is only one such row) */

#include <stdio.h>
int n, m;

int print(int matrix[][m], int n, int m);
int max_pos(int matrix[][m], int n, int m);

int main()
{
    scanf("%d %d", &n, &m);
    int matrix[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("\n\n");
    print(matrix, n, m);
    printf("Number of the row is %d\n", max_pos(matrix, n, m));
}

int max_pos(int matrix[][m], int n, int m)
{
    int array[n];
    for (int i = 0; i < n; i++)
    {
        array[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] > 0)
            {
                array[i]++;
            }
        }
    }
    printf("\n Array if positive numbers is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%4d ", array[i]);
    }
    printf("\n\n");
    int max = array[0];
    int max_ind = 0;
    for (int i = 1; i < n; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
            max_ind = i;
        }
    }
    return max_ind;
}

int print(int matrix[][m], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%5d", matrix[i][j]);
        }
        printf("\n");
    }
}