/* Delete all empty lines in file */

#include <stdio.h>

int main()
{
    FILE *file;
    FILE *file2;
    file  = fopen("input.txt", "w");
    fprintf(file, "first\n\n\n\nsecond\n\n\n\nthird\n\n\n\nfourth\n\n\n\nfifth");
    fclose(file);
    file  = fopen("input.txt", "r");
    
    int buff;
    fseek(file, 0, SEEK_END);
    buff = ftell(file);
    fseek(file, 0, SEEK_SET);
    char str[buff];
    
    file2 = fopen("new_file.txt", "w");
    char c;
    char c2;

    for (int i = 0; i < buff; i++)
    {
        str[i] = fgetc(file);
        if (str[i - 1] == '\n' && str[i] == '\n');
        else
        {
            fputc((char)str[i], file2);
        }
    }
    remove("input.txt");
    rename("new_file.txt", "input.txt");
}