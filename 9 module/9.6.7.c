/* Delete all empty lines in file */

#include <stdio.h>
#include <stdbool.h>

int main()
{
    FILE *file;
    FILE *file2;
    file  = fopen("input.txt", "r");
    file2 = fopen("input2.txt", "w");
    char c;
    char c2;
    
    while ((c = fgetc(file)) != EOF)
    {
        if (c2 != c && c2 != '\n')
        {
            fputc((char)c, file2);
        }
        c2 = c;
    }
}