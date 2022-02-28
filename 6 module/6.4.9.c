/* Describe a function that modifies a given string as follows:
first writes to it all elements with even indices, and then all elements with odd indices (preserving their relative order in each group).
For example: abcdefgh => acegbdfh, vwxyz => vxzwy */

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
    char swap[n];
    for (int i = 0; i < n / 2; i++)
    {
        swap[i] = str[2 * i];
    }
    for (int i = 0; i < n / 2; i++)
    {
        swap[i + n / 2] = str[1 + 2 * i];
    }
    for (int i = 0; i < n; i++)
    {
        str[i] = swap[i];
    }
}