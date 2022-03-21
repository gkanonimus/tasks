/* On the standard input stream, a sequence of lines is given, with the sign
the end of the sequence is an empty string. The number of lines is not more than 20.
Write a program fragment that inputs strings, places them in a dynamic
memory and forms an array of pointers to these strings. As an array terminator
use NULL pointer */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[101], *p[20];
    
    for (int i = 0; i < 20; i++)
    {
        if (fgets (str, 100, stdin) != NULL)
        {
            p[i] = malloc (strlen(str) + 1);
            if (p[i])
            {
                strcpy (p[i], str);
            }
        }
    }
    
    printf("\n\n");
    for (int i = 0; i < 20; i++)
    {
        if (p[i] == NULL)
            return 1;
        else
            printf("%s", p[i]);
    }
}