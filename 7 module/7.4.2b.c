/* Describe a function that takes an array as a parameter
pointers to strings (an array terminator is a NULL pointer):
b) the function prints the first three characters of each
a string whose length is greater than or equal to 3 */

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
        if (fgets(str, 100, stdin) != NULL)
        {
            p[i] = malloc(strlen(str) + 1);
            if (p[i])
            {
                strcpy(p[i], str);
            }
        }
    }
    func(p);
}

void func(char *p[])
{
    printf("\nCorrect lines:\n");
    for (int i = 0; p[i] != NULL; i++)
    {
        if (strlen(p[i]) > 3)
        {
            printf("%3s", p[i]);
        }
    }
}