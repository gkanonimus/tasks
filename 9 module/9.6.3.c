/* Determine which line is the longest in the file. If such lines
several, then print the first one */

#include <stdio.h>
#include <string.h>

int main()
{
    FILE *file;
    file = fopen("input.txt", "r");
    int buff;
    fseek(file, 0, SEEK_END);
    buff = ftell(file);
    fseek(file, 0, SEEK_SET);
    char str[buff];
    
    char ch;
    int size = 0;
    int max = 0;
    char *ptr;
    
    for (int i = 0; i < buff; i++)
    {
        str[i] = fgetc(file);
    }
    for (int i = 0; str[i] != '\0'; i++)
    {
        size++;
        if (str[i] == '\n')
        {
            if (max < size)
            {
                max = size;
                ptr = &str[i - max + 1];
            }
            size = 0;
        }
    }
    for (int i = 0; *(ptr + i) != '\n'; i++)
    {
        printf("%c", *(ptr + i));
    }
}