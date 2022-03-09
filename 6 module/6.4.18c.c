/* Describe a function that, in an integer matrix of n rows and m columns, counts the number of rows:
c) sorted in ascending order */

#include <stdio.h>
#include <stdbool.h>
int n, m;

int sort(int matrix[][m], int n, int m);

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
    printf("%d strings sorted in ascending order \n", sort(matrix, n, m));
}

int sort(int matrix[][m], int n, int m)
{
    int counter = 0;
    bool check;
    
    for (int i = 0; i < n; i++)
    {
        check = true;
        for (int j = 0; j < m - 1; j++)
        {
            if (matrix[i][j] > matrix[i][j + 1])
            {
                check = false;
            }
            if ((j == m - 2) && (check == true))
            {
                counter += 1;
            }
        }
    }
    return counter;
}