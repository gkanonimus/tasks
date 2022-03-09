/* Describe a function that, in an integer matrix of n rows and m columns, counts the number of rows:
a) zero (all elements of the string are zero) */

#include <stdio.h>
int n, m;

int zero(int matrix[][m], int n, int m);

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
    printf("%d zero strings \n", zero(matrix, n, m));
}

int zero(int matrix[][m], int n, int m)
{
    int temp, counter = 0;
    
    for (int i = 0; i < n; i++)
    {
        temp = 0;
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == 0)
            {
                temp += 1;
                if (temp == m - 1)
                {
                    counter += 1;
                }
            }
        }
    }
    
    return counter;
}