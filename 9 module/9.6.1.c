/* Determine how many times a sequence of for characters occurs in a file */

#include <stdio.h>

int main()
{
    FILE *file;
    int count = 0;
    char str[1000];
    char ch;
    file = fopen("input.txt", "r");
    while (fscanf(file, "%c", &ch) != EOF)
    {
        if (ch == 'f')
        {
            fscanf(file, "%c", &ch);
            if (ch == 'o')
            {
                fscanf(file, "%c", &ch);
                if (ch == 'r')
                {
                    count++;
                }
            }
        }
    }
    fclose (file);
    printf ("%d\n", count); 
}