/* Describe a function that, for a square integer matrix of the nth order, determines whether the given matrix is:
b) magic square (the sums of elements in all rows and columns are the same)
If yes, the function returns 1 and 0 otherwise */

#include <stdio.h>
#include <stdbool.h>
int n;
bool is_magic(int matrix[][n], int n);

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
    printf("%d", is_magic(matrix, n));
}

bool is_magic(int matrix[][n], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += matrix[i][i];
    }
    
    //diagonals check
    int check_1 = 0;
    for (int i = 0; i < n; i++)
    {
        check_1 += matrix[i][n - i - 1];
    }
    if (sum != check_1)
    {
        return false;
    }
    
    //rows and columns check
    int check_2, check_3;
    for (int i = 0; i < n; i++)
    {
        check_2 = 0;
        check_3 = 0;
        for (int j = 0; j < n; j++)
        {
            check_2 += matrix[i][j];
            check_3 += matrix[j][i];
            if ((check_2 != sum) || (check_3 != sum))
            {
                return false;
            }
        }
    }
    
    return true;
}