/* Compare two strings */
#include <stdio.h>
#include <stdbool.h>
int strcmp(const char *cs, const char *ct);

int main()
{
    char cs[11];
    char ct[8];
    scanf("%10s", cs);
    scanf("%7s", ct);
    printf("%d", strcmp(cs, ct));
}

int strcmp(const char *cs, const char *ct)
{
    int i = 0;
    while (true)
    {
        if (cs[i] == ct[i] && cs[i] == '\0')
        {
            return 0;
        }
        if (cs[i] == '\0')
        {
            return -1;
        }
        if (ct[i] == '\0')
        {
            return 1;
        }
        i++;
    }
}