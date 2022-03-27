/* Describe a function that takes an array as a parameter
pointers to strings (an array terminator is a NULL pointer):
d) the function counts the number of strings that are palindromes */

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
    func(p, n);
}

void func(char *p[], int n)
{
    int counter = 0;
    char c1, c2;
    for (int i = 1; i < n + 1; i++)
    {
        bool check = true;
        for (int j = 0; j < strlen(p[i]) / 2; j++)
        {
            c1 = *(p[i] + j);
            c2 = *(p[i] + strlen(p[i]) - j - 2);
            if (c1 != c2) check = false;
        }
        if (check) counter++;
    }
    printf("\nThe number of palindrome strings: %d\n", counter);
}