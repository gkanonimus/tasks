/* Edit the file like this: add it before each line
number and space. The line length in the source file does not exceed 80 characters */

#include <stdio.h>
#include <string.h>
#define SIZE 80

int main()
{
    FILE *file;
    FILE *file2;
    file  = fopen("input.txt", "r");
    file2 = fopen("new_file.txt", "w");
    int counter = 1;
    char str[SIZE];
    
    while (fgets(str, SIZE, file))
    {
        fprintf(file2, "%d ", counter);
        counter++;
        for (int i = 0; str[i] != '\n' && str[i + 1] != '\0'; i++)
        {
            fputc((char)str[i], file2);
        }
        fprintf(file2, "\n");
    }
    remove("input.txt");
    rename("new_file.txt", "input.txt");
}