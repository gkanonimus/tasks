/* Describe a function that frees up space in dynamic memory, previously
allocated to an n × m integer matrix, provided that:
a) memory for matrix elements was allocated in a single block */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m;
    printf("Enter the number of lines: ");
    scanf("%d", &n);
    printf("Enter the number of columns: ");
    scanf("%d", &m);
    int *p;
  
    p = (int*)malloc(n * m * sizeof(int));
    if (p)
    {
        printf("Memory allocation succeeded");
        free(p);
        printf("\nMemory has been freed");
    }
}