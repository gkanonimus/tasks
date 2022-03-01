/*Write a function that takes two strings as parameters and asks if the first string is a suffix of the second */

#include <stdio.h>
#include <stdbool.h>
bool is_suffix(char *small, int s, char *big, int b);

int main()
{
    int s;
    scanf("%d", &s);
    char small[s];
    scanf("%s", small);
    
    int b;
    scanf("%d", &b);
    char big[b];
    scanf("%s", big);
    
    printf("\n%d", is_suffix(small, s - 2, big, b - 1));
}

bool is_suffix(char *small, int s, char *big, int b)
{
    printf("%d-%d, %c -- %c", s, b, small[0], big[0]);
    int j = 0;
    for (int i = 0; i < b; ++i)
    {
        if (big[i] == small[j])
        {
            ++j;
            if (j == s + 1)
            {
                return true;
            }
        }
        else
        {
            j = 0;
        }
    }
    return false;
}