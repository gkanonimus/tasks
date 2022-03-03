/* Describe a function that finds the multiplication of two real matrixes of size n × m and m × k accordingly */

#include <stdio.h>
int n, m, k;
int print_1(int matrix[][m], int n, int m);
int print_2(int matrix[][k], int m, int k);
int *mult(int matrix_1[][m], int matrix_2[][k], int matrix[][k], int n, int m, int k);

int main()
{
    scanf("%d %d %d", &n, &m, &k);
    int matrix_1[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &matrix_1[i][j]);
        }
    }
    int matrix_2[m][k];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < k; j++)
        {
            scanf("%d", &matrix_2[i][j]);
        }
    }
    printf ("\n\n\n\n\n\n\nFirst matrix is:\n");
    print_1(matrix_1, n, m);
    printf ("\nSecond matrix is:\n");
    print_2(matrix_2, m, k);
    
    printf("\nTheir multiplication is:\n");
    int matrix[n][k];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            matrix[i][j] = 0;
        }
    }
    mult(matrix_1, matrix_2, matrix, n, m, k);
    print_2(matrix, n, k);
}

int *mult(int matrix_1[][m], int matrix_2[][k], int matrix[][k], int n, int m, int k)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            for (int r = 0; r < m; r++)
            {
                matrix[i][j] += matrix_1[i][r] * matrix_2[r][j];
            }
        }
    }
    return *matrix;
}



int print_1(int matrix[][m], int n, int m)
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

int print_2(int matrix[][k], int m, int k)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < k; j++)
        {
            printf("%5d", matrix[i][j]);
        }
        printf("\n");
    }
}