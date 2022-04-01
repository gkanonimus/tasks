/* Describe a function that frees up space in dynamic memory, previously
allocated to an n × m integer matrix, provided that:
b) memory for each row of the matrix was allocated separately */

#include <stdio.h>
#include <stdlib.h>

int n, m;
void space(int *p[n], int n, int m);

int main()
{
    printf("Enter the number of lines: ");
    scanf("%d", &n);
    printf("Enter the number of columns: ");
    scanf("%d", &m);
    int *p[n];
    space(p, n, m);
}

void space(int *p[n], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        p[i] = malloc(m * sizeof(int));
        if (!p[i])
        {
            printf("Error");
            return NULL;
        }
    }
    printf("Memory allocation succeeded");
    
    for (int i = 0; i < n; i++)
    {
        free(p[i]);
    }
    printf("\nMemory has been freed");
}