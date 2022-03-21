/* Describe a function that takes an array as a parameter
pointers to strings (an array terminator is a NULL pointer):
a) the function prints to the standard output the last character of each
lines */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void func(char *p[]);

int main()
{
    printf("Enter the number of lines: ");
    int n;
    scanf("%d", &n);
    char str[101], *p[n];
    for (int i = 0; i < n + 1; i++)
    {
        if (fgets (str, 100, stdin) != NULL)
        {
            p[i] = malloc (strlen(str) + 1);
            if (p[i])
            {
                strcpy (p[i], str);
            }
        }
    }
    func(p);
}

void func(char *p[])
{
    for (int i = 0; p[i] != NULL; i++)
    {
        printf("%s", (p[i] + strlen(p[i]) - 2));
    }
}