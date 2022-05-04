/* Append the line FINISH to the end of the file */

#include <stdio.h>

int main()
{
    FILE *file;
    file = fopen("input.txt", "r+");
    char finish[6] = {"FINISH"};
    
    while (getc(file) != EOF);
    fputs(finish, file); 
}