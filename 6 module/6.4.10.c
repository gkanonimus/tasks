/* Write a function that, in a given string, swaps its first and second halves.
For example: abcdefgh => efghabcd, vwxyz => yzxvw */

#include <stdio.h>
char swap(char *str, int n);

int main()
{
    int n;
    scanf("%d", &n);
    char str[n];
    scanf("%s", str);
    swap(str, n);
    printf("%s", str);
}

char swap(char *str, int n)
{
    char s[n];
    for (int i = 0; i < n - 1; i++)
    {
        s[i] = '0';
    }
    for (int i = 0; i < n / 2; i++)
    {
        s[i] = str[n / 2 + i];
    }
    for (int i = n / 2; i < n - 1; i++)
    {
        s[i] = str[i - n / 2];
    }
    for (int i = 0; i < n - 1; i++)
    {
        str[i] = s[i];
    }
}