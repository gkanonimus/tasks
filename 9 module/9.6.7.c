/* Delete all empty lines in file */

#include <stdio.h>

int main()
{
    FILE *file;
    file  = fopen("input.txt", "w+");
    fprintf(file, "first\n\nsecond\n\nthird\n\nfourth\n\nfifth");
    fclose(file);
    file  = fopen("input.txt", "r+");
    char c1;
    char c2;
    
    while ((c1 = fgetc(file)) != EOF)
    {
        if (c1 == '\n' && c2 == '\n')
        {
            fseek(file, -1, SEEK_CUR);
            fputc(8, file);
        }
        c2 = c1;
    }
}