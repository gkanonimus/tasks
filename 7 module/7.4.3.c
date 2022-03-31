/* Describe a function that allocates space in dynamic memory for
integer matrix of size n × m, provided that the memory for each row
matrices are separated. The function returns a pointer to the matrix, or NULL if
failed to allocate memory of the required size */

#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

int main()
{
  int n, m;
  printf("Enter the number of lines: ");
  scanf("%d", &n);
  printf("Enter the number of columns: ");
  scanf("%d", &m);
  int *p[n];
  
  for (int i = 0; i < n; i++)
  {
      p[i] = malloc(m * sizeof(int));
      if (!p[i])
      {
          printf("Error");
          return '\0';
      }
  }
  printf("Memory allocation succeeded");
  return 0;
}