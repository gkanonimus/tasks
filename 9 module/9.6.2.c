/* Print all lines of a file containing the given string (entered with
keyboard) as a substring. It is known that the length of a line in a file does not exceed 80 characters */

#include <stdio.h>
#include <string.h>
#define SIZE 80
#define N 10

int main()
{
    FILE *file;
    char str[SIZE];
    char in[N];
    scanf("%s", in);
    int check;
    file = fopen("input.txt", "r");
    
    while (fgets(str, SIZE, file))
    {
        for (int i = 0; str[i] != '\n'; i++)
        {
            if (str[i] == in[0])
            {
                check = 0;
                for (int j = 0; j < (int)strlen(in); j++)
                {
                    check += (str[i + j] == in[j]);
                }
            }
            if (check == (int)strlen(in))
            {
                printf("%s", str);
                break;
            }
        }
    }
    fclose (file);
}