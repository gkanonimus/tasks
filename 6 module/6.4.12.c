/* Write a function that takes two strings as parameters and asks if the first string is a prefix of the second */

#include <stdio.h>
#include <stdbool.h>
bool is_prefix(char *first, char *second);

int main()
{
    int n, m;
    scanf("%d", &n);
    scanf("%d", &m);
    char first[n];
    scanf("%s", first);
    first[n - 1] = '\0';
    char second[m];
    scanf("%s", second);
    second[m - 1] = '\0';
    printf("%d", is_prefix(first, second));
}

bool is_prefix(char *first, char *second)
{
    int n = 0;
    int m = 0;
    while (first[n] != '\0')
    {
        n++;
    }
    while (second[m] != '\0')
    {
        m++;
    }
    for (int i = 0; i < n && i < m; i++)
    {
        if (first[i] != second[i])
        {
            return false;
        }
    }
    return true;
}