/* Describe a function that takes an array as a parameter
pointers to strings (an array terminator is a NULL pointer):
c) the function prints a string of maximum length to the
standard output stream */

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
    char *ptr = p[0];
    int max = (int)strlen(p[0]) - 1;
    printf("\nThe longest line is:\n");
    for (int i = 0; p[i] != NULL; i++)
    {
        if ((int)(strlen(p[i]) - 1) > max)
        {
            ptr = p[i];
            max = (int)strlen(p[i]) - 1;
        }
    }
    printf("%s", ptr);
}