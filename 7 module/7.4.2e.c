/* Describe a function that takes an array as a parameter
pointers to strings (an array terminator is a NULL pointer):
e) the function arranges the strings in lexicographic order */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int n;
void func(char *p[], int n);

int main()
{
    printf("Enter the number of lines: ");
    //int n;
    scanf("%d", &n);
    char str[101], *p[n], *p2[n];
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
    func(p, n);
}

void func(char *p[], int n)
{
    int  i, j;
    char *s;
    for(i = 0; i < n + 1; ++i)
    {
        s = p[i];
        j = i - 1;
        while((j >= 0) && (strcmp(p[j], s) > 0))
        {
            p[j + 1] = p[j];
            --j;
        }
        p[j + 1] = s;
    }
    for (int i = 0; i < n + 1; i++)
    {
        printf("%s", p[i]);
    }
}