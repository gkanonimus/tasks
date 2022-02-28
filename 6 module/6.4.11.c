/* Describe a function that "flips" the contents of a string.
For example: abc => cba */

#include <stdio.h>
char reverse(char *str, int n);

int main()
{
    int n;
    scanf("%d", &n);
    char str[n];
    scanf("%s", str);
    reverse(str, n);
    //printf("%s", str);
}

char reverse(char *str, int n)
{
    char rev[n];
    for (int i = 0; i < (n-1); i++)
    {
        rev[i] = str[(n - i - 2)];
    }
    printf("%s", rev);
}