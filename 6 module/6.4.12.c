/* Write a function that takes two strings as parameters and asks if the first string is a prefix of the second */

#include <stdio.h>
#include <stdbool.h>
bool is_prefix(char *first, int n, char *second);

int main()
{
    int n, m;
    scanf("%d", &n);
    scanf("%d", &m);
    char first[n];
    scanf("%s", first);
    char second[m];
    scanf("%s", second);
    printf("%d", is_prefix(first, n, second));
}

bool is_prefix(char *first, int n, char *second)
{
    for (int i = 0; i < n; i++)
    {
        if (first[i] != second[i])
        {
            return false;
        }
    }
    return true;
}