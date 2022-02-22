/* Add the second line to the first line */
#include <stdio.h>
char *strcat (char *s, const char *ct);

int main()
{
    char str[11];
    scanf("%5s", str);
    char ct[11];
    scanf("%5s", ct);
    strcat(str, ct);
    printf("%s", str);
}

char *strcat (char *str, const char *ct)
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    int j = 0;
    while (str[i] = ct[j])
    {
        j++;
        i++;
    }
}