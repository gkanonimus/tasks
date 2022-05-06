/* Determine which line is the longest in the file. If such lines
several, then print the first one */

#include <stdio.h>
#include <string.h>
#define BUFF 150

int main()
{
    FILE *file;
    file = fopen("input.txt", "r");
    char ch;
    char str[BUFF];
    
    int size = 0;
    int max = 0;
    char *ptr;
    
    for (int i = 0; (ch = fgetc(file)) != EOF; i++)
    {
        str[i] = ch;
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