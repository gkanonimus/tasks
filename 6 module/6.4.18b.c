/* Describe a function that, in an integer matrix of n rows and m columns, counts the number of rows:
b) all elements of which have the same sign (assume that all elements of the matrix are different from 0) */

#include <stdio.h>
int n, m;

int same_sign(int matrix[][m], int n, int m);
int modul(int x);

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
    printf("%d strings has same sign \n", same_sign(matrix, n, m));
}

int same_sign(int matrix[][m], int n, int m)
{
    int sum_1, sum_2, counter = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            sum_1 += matrix[i][j];
            sum_2 += modul(matrix[i][j]);
            if (j == m - 1)
            {
                if ((sum_1 == sum_2) || (sum_1 == sum_2 * -1))
                {
                    counter++;
                }
                sum_1 = 0;
                sum_2 = 0;
            }
        }
    }
    return counter;
}

int modul(int x)
{
    return ((x > 0) ? x : -x);
}