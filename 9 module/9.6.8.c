/* The file contains a non-empty sequence of integers that are
Fibonacci numbers. Assign one more, another Fibonacci number */

#include <stdio.h>

int main()
{
    FILE *file;
    file = fopen("input.txt", "r+");
    int first;
    int second = 1;
    
    while (fscanf(file, "%d", &first) != EOF)
    {
        second += first;
    }
    second -= first;
    fprintf(file, "%d", second);
}