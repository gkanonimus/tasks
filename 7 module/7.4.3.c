/* Describe a function that allocates space in dynamic memory for
integer matrix of size n × m, provided that the memory for each row
matrices are separated. The function returns a pointer to the matrix, or NULL if
failed to allocate memory of the required size */

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
  return 0;
}