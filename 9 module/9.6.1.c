/* Determine how many times a sequence of for characters occurs in a file */

#include <stdio.h>
#define SIZE 100

int main()
{
    FILE *file;
    char str[SIZE];
    int count = 0;
    file      = fopen("input.txt", "r");
    
    while (fgets(str, SIZE, file))
    {
        for (int i = 2; str[i] != '\0'; i++)
        {
            if (str[i - 2] == 'f' && str[i - 1] == 'o' && str[i] == 'r')
            {
                count++;
            }
        }
    }
    fclose (file);
    printf("%d\n", count);
}