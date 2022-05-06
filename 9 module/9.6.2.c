/* Print all lines of a file containing the given string (entered with
keyboard) as a substring. It is known that the length of a line in a file does not exceed 80 characters */

#include <stdio.h>
#include <string.h>
#define SIZE 80
#define N 80

int main()
{
    FILE *file;
    char str[SIZE];
    char in[N];
    scanf("%s", in);
    file = fopen("input.txt", "r");
    int l = (int)strlen(in);
    int check;
    
    while (fgets(str, SIZE, file))
    {
        char *ptr = str;
        if (strlen(str) >= l + 1)
        {
            for (int i = 0; str[i] != '\n'; i++)
            {
                if (*(ptr + i) == in[0])
                {
                    check = 0;
                    for (int j = 0; j < l;j++)
                    {
                        check += (*(ptr + i + j) == in[j]);
                    }
                    if (check == l)
                    {
                        printf("%s", str);
                        break;
                    }
                }
            }
        }
    }
    fclose (file);
}