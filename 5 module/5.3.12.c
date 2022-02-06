/* On the standard input stream, a formula of the following form is set:
<formula> ::= <number> | (<formula> <sign> <formula>)
<sign> ::= + | - | *
<number> ::= 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9
Assuming that there are no errors in the formula entry, describe the function that calculates the value of this formula */

#include <stdio.h>
int calc(char ch);
//(5+(1+2))
int main()
{
    char ch;
    scanf("%c", &ch);
    printf("\n%d\n", calc(ch));
}

int calc(char ch)
{
    char left, sign, right;
    if (ch == '(')
    {
        scanf("%c", &ch);
        left = ch - 48;
        scanf("%c", &ch);
        sign = ch;
        scanf("%c", &ch);
        if (ch >= '0' && ch <= '9')
        {
            right = ch - 48;
        }
        else
        {
            right = calc('(');
        }
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
}