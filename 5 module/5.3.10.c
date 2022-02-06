/* Text is specified on the standard input stream (a sequence of characters ending with a dot, the dot is not included in the text). Recursively describe a function that counts the number of digits in a given text */

#include <stdio.h>
int count_numb();

int main()
{
    printf("\n%d digits in text\n", count_numb());
}

int count_numb()
{
    char ch;
    scanf ("%c", &ch);
    if (ch != '.') 
    {
        if(ch >= '0' && ch <= '9')
        {
            return 1 + count_numb();
        }
        return 0 + count_numb();
    }
    return 0;
}