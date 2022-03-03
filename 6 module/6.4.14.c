/* Describe a function that, in an integer matrix of n rows and m columns, swaps the maximum and minimum elements of the matrix (assume that all elements of the matrix are different) */

#include <stdio.h>
int n, m;

int print(int matrix[][m], int n, int m);
int swap(int matrix[][m], int n, int m);

int main()
{
    scanf("%d", &n);
    scanf("%d", &m);
    int matrix[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    swap(matrix, n ,m);
    printf("\n");
    print(matrix, n ,m);

}
int swap(int matrix[][m], int n, int m)
{
    int max = matrix[0][0];
    int min = matrix[0][0];
    int max1 = 0;
    int max2 = 0;
    int min1 = 0;
    int min2 = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] > max)
            {
                max = matrix[i][j];
                max1 = i;
                max2 = j;
            }
            if (matrix[i][j] < min)
            {
                min = matrix[i][j];
                min1 = i;
                min2 = j;
            }
        }
    }
    matrix[max1][max2] = min;
    matrix[min1][min2] = max;
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