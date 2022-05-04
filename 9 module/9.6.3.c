/* Determine which line is the longest in the file. If such lines
several, then print the first one */

#include <stdio.h>
#include <string.h>
#define SIZE 80

int main()
{
    FILE *file;
    file = fopen("input.txt", "r");
    char str[SIZE];
    char lstr[SIZE];
    int  lstr_size = 0;
    
    while(fgets(str, SIZE, file))
    {
        if (strlen(str) > lstr_size)
        {
            lstr_size = strlen(str);
            strcpy(lstr, str);
        }
    }
    printf("%s", lstr);
}