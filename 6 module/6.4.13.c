/*Write a function that takes two strings as parameters and asks if the first string is a suffix of the second */

#include <stdio.h>
#include <stdbool.h>
bool is_suffix(char *small, char *big);

int main()
{
    int s;
    scanf("%d", &s);
    char small[s];
    scanf("%s", small);
    small[s - 1] = '\0';
    
    int b;
    scanf("%d", &b);
    char big[b];
    scanf("%s", big);
    big[b - 1] = '\0';
    
    printf("%d", is_suffix(small, big));
}

bool is_suffix(char *small, char *big)
{
    int s = 0;
    int b = 0;
    while (small[s] != '\0')
    {
        s++;
    }
    while (big[b] != '\0')
    {
        b++;
    }
    int j = 0;
    while (small[s] == big[b])
    {
        if (s == 0)
        {
            return true;
        }
        s--;
        b--;
    }
    return false;
}