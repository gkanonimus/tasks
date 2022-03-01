/* Return a pointer to the last occurrence of the character c in the string cs or NULL if there is none */

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
    int i = 0;
    while (cs[i] != '\0')
    {
        i++;
    }
    while (cs[i] != c)
    {
        if (!i)
        {
            return '\0';
        }
        i--;
    }
    char *temp = cs;
    return temp + i;
}