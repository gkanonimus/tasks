/* Describe a function that, for a square integer matrix of the nth order, determines whether the given matrix is:
a) symmetrical about the main diagonal
If yes, the function returns 1 and 0 otherwise */

#include <stdio.h>
#include <stdbool.h>
int n;
bool is_sym(int matrix[][n], int n);

int main()
{
    scanf("%d", &n);
    int matrix[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("%d", is_sym(matrix, n));
}

bool is_sym(int matrix[][n], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (matrix[i][j] != matrix[j][i])
            {
                return false;
            }
        }
    }
    return true;
}