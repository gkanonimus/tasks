/* On the standard input stream, a formula of the following form is set:
<formula> ::= <number> | (<formula> <sign> <formula>)
<sign> ::= + | - | *
<number> ::= 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9
Assuming that there are no errors in the formula entry, describe the function that calculates the value of this formula */

#include <stdio.h>
#include <stdbool.h>

int calc();

int main()
{
    printf("\n%d\n", calc());
}

bool charIsDigit(char ch)
{
    return (ch >= '0' && ch <= '9');
}

int calc()
{
    char ch, left, sign, right;

    scanf("%c", &ch);

    if (ch == '(')
    {
        left = calc();
        scanf("%c", &ch);
        sign = ch;
        right = calc();
        scanf("%c", &ch);

        if (sign == '+')
        {
            return (left + right);
        }
        if (sign == '-')
        {
            return (left - right);
        }
        if (sign == '*')
        {
            return (left * right);
        }
    }
    return ch - '0';
}