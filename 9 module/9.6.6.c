/* Create a file named copy.txt - a copy of the given file */

#include <stdio.h>

int main()
{
    FILE *file;
    FILE *file2;
    file  = fopen("input.txt", "r");
    file2 = fopen("input2.txt", "w");
    char c;
    
    while ((c = fgetc(file)) != EOF)
    {
        fputc((char)c, file2);
    }
}