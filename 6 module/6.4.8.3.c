/* Return a pointer to the first occurrence of the character c in the string cs or NULL if there is none */

#include <stdio.h>
char *strchrr (char *cs, char c);

int main()
{
    char c;
    scanf("%c", &c);
    char cs[11];
    scanf("%11s", cs);
    printf("%s", strchrr(cs, c));
}

char *strchrr (char *cs, char c)
{
    char *tmp = cs;
    while (*tmp != c)
    {
        tmp++;
    }
    return tmp;
}